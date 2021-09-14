/*
License: GPL-2
  An electronic filing cabinet: scan, print, stack, arrange
 Copyright (C) 2009 Simon Glass, chch-kiwi@users.sourceforge.net
 .
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 .
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 .
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA

X-Comment: On Debian GNU/Linux systems, the complete text of the GNU General
 Public License can be found in the /usr/share/common-licenses/GPL file.
*/
/*
   Project:    Maxview
   Author:     Simon Glass
   Copyright:  2001-2009 Bluewater Systems Ltd, www.bluewatersys.com
   File:       dmop.cpp
   Started:    26/6/09

   This file contains operations relating to Desktopmodel.
   These operations are typically invoked by the undo system in desktopundo
*/

#include <QFile>
#include <QDir>
#include <QProcess>
#include <QThread>
#include <QDebug>
#include <QCoreApplication>


#include "desktopmodel.h"
#include "file.h"
#include "op.h"
#include "utils.h"
#include "pdfcore.h"
#include "hummuspdfcore.h"
#include "email.h"
//#include "pdfcore.h"

err_info *Desktopmodel::opUnstackFromStack (QModelIndex &src, QStringList &newnames,
      int srcpagenum, QList<pagepos_info> &pagepos)
   {
   QString newname;
   err_info *e = NULL;
   File *f = getFile (src);
   File *fnew;
   QList<File *> flist;
   int upto = 0, row;

   // remove every page from the stack except the first
   foreach (newname, newnames)
      {
      pagepos_info &pp = pagepos [upto++];

      // unstack the right number of pages from the source into a fresh stack
      CALLB (f->unstackItems (srcpagenum, pp.pagecount, true, newname, fnew, row));
      fnew->setPos (pp.pos);
      fnew->setPagenum (pp.pagenum);
      flist << fnew;
      }

   buildItem (src);
   insertRows (flist, src.parent ());
   return e;
   }


err_info *Desktopmodel::opUnstackStacks (QModelIndexList &list, QModelIndex parent,
      QList<QStringList> &_newnames)
   {
   QModelIndexList newlist;
   QModelIndex ind;
   err_info *err = NULL;

   // work through each stack in the list
   // note that some items might only have one page, in which case we do nothing
   foreach (ind, list)
      {
      File *f = getFile (ind);
      File *fnew;
      int pagenum = 1, row;

//       printf ("unstack %s, row %d\n", f->filename ().latin1 (), ind.row ());

      QList<File *> flist;
      QStringList stack_names;

      // remove every page from the stack except the first
      while (f->pagecount () > 1)
         {
         // for each new page, create a fresh stack
         err = f->unstackItems (0, 1, true, "", fnew, row, pagenum++);
         if (err)
            break;
         stack_names << fnew->filename ();
         flist << fnew;
         }

      // we leave one page on the original stack
//       printf ("unstack done, row %d, flist size = %d\n", ind.row (), flist.size ());
      if (flist.size ())   // any pages unstacked?
         {
         buildItem (ind);
         insertRows (flist, parent);
         }
      _newnames << stack_names;
      }
   return err;
   }


err_info *Desktopmodel::opStackStacks (QModelIndex &index, QModelIndexList &list, int &pagenum)
   {
   QList<QModelIndexList> pages_list;
   QModelIndexList dest;

   dest << index;
   pages_list << list;
   return opRestackStacks (dest, index.parent (), pages_list, pagenum);
   }



err_info *Desktopmodel::opRestackStacks (QModelIndexList &list, QModelIndex parent,
      QList<QModelIndexList> &pages_list, int &in_destpage)
   {
   QModelIndexList delete_list;
   QModelIndex ind;
   QString fname;
   err_info *e = NULL;
   int upto = 0;
   QModelIndex pind;
   int out_destpage = in_destpage; // destination page for first stack

   // work through each stack in the list
   foreach (ind, list)
      {
      File *f = getFile (ind);
//       File *fnew;
//       int pagenum = 1;
      int destpage = in_destpage == -1 ? f->pagenum () : in_destpage;

      if (out_destpage == -1)
         out_destpage = destpage;
      QList<File *> flist;

      // add each page back onto the stack
      int old_pagenum = f->pagenum ();

      QString finalPath=f->pathname();
      std::vector<std::string> fileNames;
      fileNames.push_back(f->pathname().toStdString());

      //f->kill();

      foreach (pind, pages_list [upto])
         {
         if (pind != QModelIndex ())   // not empty
            {
            File *pdel = getFile (pind);

            // get page to stack to, and work out where the next lot will go
            f->setPagenum (destpage);
            destpage += pdel->pagecount ();


           // getFile (ind)->remove ();
            // stack this page, and remember to remove from model later
            //f->close();
            //f->flush();
         //   CALLB (f->stackItem (pdel));



            fileNames.push_back(pdel->pathname().toStdString());

           // Q_ASSERT (pind.isValid ());
          //  removeRows (pind.row (), 1, parent);

            delete_list << pind;
            }
         }

      f->setPagenum (old_pagenum);
      //f->close();

      PDFCore p;

      f->kill();
      //CALLB (f->stackItem (f));
      int status=p.merge(fileNames,finalPath.toStdString());
      printf(p.getErrorMsg().c_str());
      f->setValid(false);
      f->load();
      buildItem (ind);
      upto++;
      }

   // record destination page
   in_destpage = out_destpage;

   // we lose the original error
   //trashStacks (delete_list, parent);
   err_info *e2 = opDeleteStacks (delete_list, parent);

   if (!e)
      e = e2;
   return e;
   }


err_info *Desktopmodel::opDuplicateStacks (QModelIndexList &list, QModelIndex parent,
      QStringList &namelist, File::e_type type, int odd_even)
   {
   QModelIndexList newlist;
   QModelIndex ind;
   QList<File *> flist;
   err_info *err = NULL;
   File *fnew, *f;
   int count;

   // duplicate each stack, creating a list of new files
   QString opname = type == File::Type_other ? tr ("Copy files") :
      QString (tr ("Convert to %1")).arg (File::typeName (type));
   count = type == File::Type_other ? list.size () : listPagecount (list);
   Operation op (opname, count, 0);
   foreach (ind, list)
      {
      f = getFile (ind);
      err = f->duplicateAny (type, odd_even, op, fnew);
      if (err)
         break;
      flist << fnew;
      namelist << fnew->filename ();
      }

   // insert the files
   insertRows (flist, parent);
   return err;
   }


err_info *Desktopmodel::opDeleteStack (QModelIndex &index)
   {
   QModelIndexList list;   // list of indexes to delete

   list << index;
   return opDeleteStacks (list, index.parent ());
   }


err_info *Desktopmodel::opDeleteStacks (QModelIndexList &list, QModelIndex parent)
   {


    err_info *e = NULL;
    QModelIndex ind;
    Desk *desk = getDesk (parent);
    QModelIndexList del_list;   // list of indexes to delete

    foreach (ind, list)
       {

       if (!ind.isValid ())
          continue;

       del_list << ind;

       }


    sortForDelete (del_list);

   foreach (ind, del_list)
      {
      Q_ASSERT (ind.isValid ());
      removeRows (ind.row (), 1, parent);

      File *f = getFile (ind);

      f->kill();
     // qDebug() << "passed here safe";

      e = f->remove ();

      if (e)
         break;
      }

    /** this seems to be a bad idea as it causes a crash in the proxy.We are not
        actually sorting the model, so perhaps we shouldn't emit it anyway. Not
        emitting it doesn't seem to cause any problem */
 //    emit layoutChanged();
    return e;


 //  err_info *e = NULL;
 //  QModelIndex ind;
 //  QModelIndexList del_list;   // list of indexes to delete
//    Desk *desk = getDesk (parent);

   //UNUSED (parent);
//    _model_invalid = true;
 //  foreach (ind, list) if (getFile (ind))
 //     {
     // CALLB (getFile (ind)->flush());
  //    getFile (ind)->kill();
 //     CALLB (getFile (ind)->remove ());
  //    del_list << ind;
  //    }

   // sort in reverse order so the row numbers don't change on us
  // sortForDelete (del_list);
  // foreach (ind, del_list){

  //     Q_ASSERT (ind.isValid ());

 //     removeRows (ind.row (), 1, parent);}

//       delete desk->takeAt (ind.row ());
//    _model_invalid = false;

//   return e;
   }


err_info *Desktopmodel::opTrashStacks (QModelIndexList &list, QModelIndex parent,
      QStringList &trashlist, QString &dest, bool copy)
   {
   err_info *e = NULL;
   QModelIndex ind;
   Desk *desk = getDesk (parent);
   QModelIndexList del_list;   // list of indexes to delete

//    savePersistentIndexes ();
//    emit layoutAboutToBeChanged();

   if (dest.isEmpty ())
      dest = desk->trashdir ();
   if (dest.isEmpty ())
      return err_make (ERRFN, ERR_no_trash_directory_is_defined);

   // we don't know how many rows will be removed, so let's say all of them for now
//    beginRemoveRows (parent, 0, rowCount (parent));
//    _model_invalid = true;
   foreach (ind, list)
      {
    ///  File *f = getFile (ind);
    ///  QString trashname;

    ///  f->kill();

      // skip missing items
      if (!ind.isValid ())
         continue;
  //    printf ("   row %d: %p, delete %s\n", ind.row (), f,
  //                f->filename ().toLatin1 ().constData());

      //QTimer::singleShot(2000, this, SLOT() );

      //QThread::msleep(2000);

   //   e = f->move (dest, trashname, copy);
   //   if (e)
   //      break;
      del_list << ind;
//       removeRow (ind.row (), ind.parent ());
    //  trashlist << trashname;
      }
   if (!copy)
      {
      sortForDelete (del_list);

      foreach (ind, del_list)
         {
         Q_ASSERT (ind.isValid ());
         removeRows (ind.row (), 1, parent);


         File *f = getFile (ind);
         QString trashname;

         f->kill();
         qDebug() << "passed here safe";

         e = f->move (dest, trashname, copy);
         if (e)
            break;

         trashlist << trashname;

         }

      }

   /* if we have the destination desk loaded, alert it about the new files */
   addFilesToDesk (dest, trashlist);

   /** this seems to be a bad idea as it causes a crash in the proxy.We are not
       actually sorting the model, so perhaps we shouldn't emit it anyway. Not
       emitting it doesn't seem to cause any problem */
//    emit layoutChanged();

   return e;
   }


err_info *Desktopmodel::opUntrashStacks (QStringList &trashlist, QModelIndex parent,
         QStringList &filenames, QList<pagepos_info> *pagepos, QString &src, bool copy)
   {
   Desk *desk = getDesk (parent);
   QModelIndexList list;
   QString trashname;
   QModelIndex ind;
   File *fnew;
   err_info *e = NULL;
   QList<File *> flist;
   int i;

   /* first, move all the trashed files back into the current directory,
      creating a list of the new File * records thus created. If
      an error occurs, stop where we got up to (with the one that caused
      an error not added). For a copy, we just remove from the trash */

   qDebug() << "Here: " << src;



   for (i = 0; i < trashlist.size (); i++)
      {
      trashname = trashlist [i];
      QString fname = filenames [i];
      printf ("undelete %s to %s\n", trashname.toLatin1 ().constData(),
              fname.toLatin1 ().constData());
      if (src.isEmpty ())
         e = copy
            ? desk->deleteFromTrash (trashname)
            : desk->moveFromTrash (trashname, fname, fnew);
      else
         e = copy
            ? desk->deleteFromDir (src, trashname)
            : desk->moveFromDir (src, trashname, fname, fnew);
      if (e)
         break;

      // if we have position/page number information, restore it
      if (!copy && pagepos)
         {
         fnew->setPos ((*pagepos) [i].pos);
         fnew->setPagenum ((*pagepos) [i].pagenum);
         }
      filenames [i] = fname;  // update the filename
      flist << fnew;
      }

   if (!copy)
      insertRows (flist, parent);

   /* if we have the source desk loaded, alert it about the removed files */
   removeFilesFromDesk (src, trashlist);

   return e;
   }


err_info *Desktopmodel::opReorder (int num, int list, QModelIndex &ind){


    File *f = getFile (ind);
    if(!f)return NULL;

    qDebug() << "T: " << num << " : " << list;
    f->reorderItem(num, list);
    //QString finalPath = f->pathname();
   // QString finalPath = ind.model ()->data (ind, Desktopmodel::Role_pathname).toString ();

   /* qDebug () << "Do: " << num << " " << list;
    HummusPDFCore p;

    f->kill();
    //qDebug () << "DOing";
    int status=p.reorder(num, list, finalPath.toStdString());
    //qDebug () << "DOing2";
    printf(p.getErrorMsg().c_str());
    f->setValid(false);
    f->load();*/
    buildItem (ind);
    return NULL;
}


void Desktopmodel::opMoveStacks (QModelIndexList &list, QModelIndex parent,
      QList<QPoint> &newpos)
   {
   Desk *desk = getDesk (parent);
   QModelIndex ind;
   int i = 0;

   foreach (ind, list) if (ind.isValid ())
      {
      getFile (ind)->setPos (newpos [i++]);
    //  qDebug () << "Move: " << getFile(ind)->filename() << " : "<< getFile(ind)->pos();
      //removeRows (ind.row (), 1, parent);
      emit dataChanged (ind, ind);
      }
   desk->dirty ();
   desk->flush();
   //delete desk;
   emit selectIt(parent);

   //QString pth = desk->dir();
   //delete desk;

   }


err_info *Desktopmodel::opUnstackPage (QModelIndex &ind, int &pagenum,
      bool remove, QString &newname)
   {
   File *fnew, *f = getFile (ind);
   err_info *e = NULL;
   int row;
/*
   HummusPDFCore p;
   QString baseFileName = f->filename();
   int status=p.split(f->pathname().toStdString(),destPathStr.toStdString(),baseFileName.toStdString(),true);
   if (status)
      qDebug() << (tr(p.getErrorMsg().c_str()));
*/

   if (pagenum == -1)
      pagenum = f->pagenum ();
   if ((!remove || f->pagecount () > 1)
      && (e = f->unstackItems (pagenum, 1, remove, "", fnew, row, 1), !e))
      {
      newname = fnew->filename ();
      // if removing, update the view of the source stack

      if (remove)
         buildItem (ind);
      QModelIndexList list;
      newItem (row, ind.parent (), list);
      }
   return e;
   }

err_info *Desktopmodel::opUnstackTrash (QModelIndex &ind, int &pagenum,
      bool remove, QString &newname)
   {
   File *f = getFile (ind);
   err_info *e = NULL;
   int row;
   QString fnew;
/*
   HummusPDFCore p;
   QString baseFileName = f->filename();
   int status=p.split(f->pathname().toStdString(),destPathStr.toStdString(),baseFileName.toStdString(),true);
   if (status)
      qDebug() << (tr(p.getErrorMsg().c_str()));
*/

   if (pagenum == -1)
      pagenum = f->pagenum ();
   if ((!remove || f->pagecount () > 1)
      && (e = f->unstackTrash (pagenum, 1, remove, "", fnew, row, 1), !e))
      {


     newname = fnew;
      // if removing, update the view of the source stack

      if (remove)
         buildItem (ind);
    //  QModelIndexList list;
     // newItem (row, ind.parent (), list);
      }
   return e;
   }

err_info *Desktopmodel::opStackTrash (QModelIndex &ind, QString &newname)
   {
   File *f = getFile (ind);
   QString finalPath = f->pathname();
   err_info *e = NULL;

   PDFCore p;

   f->kill();
   std::vector<std::string> fileNames;
   fileNames.push_back(newname.toStdString());
   fileNames.push_back(finalPath.toStdString());

   int status = p.merge(fileNames,finalPath.toStdString());
   printf(p.getErrorMsg().c_str());
   f->setValid(false);
   f->load();
   buildItem (ind);

   QFile file (newname);

   if (file.exists () && !file.remove ())
      return err_make (ERRFN, ERR_could_not_remove_file2,
                file.fileName ().toLatin1 ().constData(),
                file.errorString ().toLatin1 ().constData());
   return e;

   }

err_info *Desktopmodel::opSendTo (QModelIndex &index, QModelIndex &parent, QString newdir, QString &newname)
   {
/*
    QList<QString> parts = olddir.split("/");
    QList<QString> parts2 = parts[parts.size()-1].split(".");

    QString old_fname = parts2[0];
  //  QFile file (_pathname);

    QString newDir = newdir;

    // get the full paths for the current file, and the new file it will become
    QString oldPath = olddir;
    QString newPath = newDir + "/" + parts[parts.size()-1];

    // the new name will hopefully be the same as the old
    QString newName = parts2[0];

    QDir dir;

    if (dir.exists (newPath))
       {
       int i = 1;

       while(dir.exists (newPath)){
           newPath = newDir + "/" + parts2[0] + "_copy(" + QString::number(i) + ")" + "." + parts2[1];
           i++;
       }
       i--;
       newName = parts2[0] + "(" + QString::number(i) + ")";
       printf ("new name %s\n", qPrintable (newName));
       }

    //QDir fg("C:\\Users\\Ayman\\Documents\\test");
    //oldPath = "C:\\Users\\Ayman\\Documents\\test\\test23.pdf";
    //newPath = "C:\\Users\\Ayman\\Documents\\test\\trash\\test23.pdf";

   // qDebug () << "test is here";
    //QFile fil("C:\\Users\\Ayman\\Documents\\test\\test2.pdf");
   // fil.rename("C:\\Users\\Ayman\\Documents\\test\\trash\\test2.pdf");

    if (!dir.rename(oldPath, newPath))
       // qDebug()<< "hereeee";
       return err_make (ERRFN, ERR_could_not_rename_file2, qPrintable (oldPath),
                   qPrintable (newPath));

    return NULL;

   */

   // qDebug() << "Sending to";

    err_info *e = NULL;
    QModelIndex ind = index;
    Desk *desk = getDesk (parent);

    QStringList trashlist;

       if (!ind.isValid ())
           return NULL;

      Q_ASSERT (ind.isValid ());
      removeRows (ind.row (), 1, parent);

      File *f = getFile (ind);
      QString trashname;

      f->kill();
      //qDebug() << "passed here safe";

      e = f->move (newdir, trashname, false);
      if (e)
         return e;

      newname = trashname;
      trashlist << trashname;

      QString sdir = newdir + "/";
      QModelIndex deskInd = deskFromDirname(sdir);
      if(deskInd != QModelIndex ()){
          //qDebug() << "Yes exists";
          addFilesToDesk (sdir, trashlist);
      }

    return e;

   }

err_info *Desktopmodel::opUnsendTo (QString newdir, QString &newname, QString olddir)
   {
/*
    QList<QString> parts = olddir.split("/");
    QList<QString> parts2 = parts[parts.size()-1].split(".");

    QString old_fname = parts2[0];
  //  QFile file (_pathname);

    QString newDir = newdir;

    // get the full paths for the current file, and the new file it will become
    QString oldPath = olddir;
    QString newPath = newDir + "/" + parts[parts.size()-1];

    // the new name will hopefully be the same as the old
    QString newName = parts2[0];

    QDir dir;

    if (dir.exists (newPath))
       {
       int i = 1;

       while(dir.exists (newPath)){
           newPath = newDir + "/" + parts2[0] + "_copy(" + QString::number(i) + ")" + "." + parts2[1];
           i++;
       }
       i--;
       newName = parts2[0] + "(" + QString::number(i) + ")";
       printf ("new name %s\n", qPrintable (newName));
       }

    //QDir fg("C:\\Users\\Ayman\\Documents\\test");
    //oldPath = "C:\\Users\\Ayman\\Documents\\test\\test23.pdf";
    //newPath = "C:\\Users\\Ayman\\Documents\\test\\trash\\test23.pdf";

   // qDebug () << "test is here";
    //QFile fil("C:\\Users\\Ayman\\Documents\\test\\test2.pdf");
   // fil.rename("C:\\Users\\Ayman\\Documents\\test\\trash\\test2.pdf");

    if (!dir.rename(oldPath, newPath))
       // qDebug()<< "hereeee";
       return err_make (ERRFN, ERR_could_not_rename_file2, qPrintable (oldPath),
                   qPrintable (newPath));

    return NULL;

   */

   // qDebug() << "Sending to";

    err_info *e = NULL;

    QString sdir = newdir + "/";
    QModelIndex deskInd = deskFromDirname(sdir);
    if(deskInd != QModelIndex ()){

    Desk *desk = getDesk (deskInd);
    QModelIndex ind = index (newname, deskInd);


    QStringList trashlist;

       if (!ind.isValid ())
           return NULL;

      Q_ASSERT (ind.isValid ());
      removeRows (ind.row (), 1, deskInd);

      File *f = getFile (ind);
      QString trashname;

      f->kill();
      //qDebug() << "passed here safe";

      e = f->move (olddir, trashname, false);
      if (e)
         return e;

      trashlist << trashname;
      newname = trashname;

      QString ssdir = olddir;
      QModelIndex desknd = deskFromDirname(ssdir);
      //qDebug() << ssdir;
      if(desknd != QModelIndex ()){
         // qDebug() << "Yes exists";
          addFilesToDesk (ssdir, trashlist);
      }
    }

    return e;

   }


err_info *Desktopmodel::opUpdateAnnot (QModelIndex &ind, QHash<int, QString> &updates)
   {
   _modelconv->assertIsSource (ind.model (), &ind, 0);
   File *f = getFile (ind);

   if (f)
      {
      //f->putAnnot (updates);
      //f->flush ();
      }
   return NULL;
   }



err_info *Desktopmodel::opDeletePages (QModelIndex &ind, QBitArray &pages,
      QByteArray &del_info, int &count)
   {
   File *f = getFile (ind);
   qDebug() << "Step 1";
   err_info *e = NULL;

   if (f)
      {

       HummusPDFCore p;
       int sz = f->pagecount();
       qDebug() << "Step 2";

       QString pname = f->pathname();
       qDebug() << "Step 3";


       f->kill();
       qDebug() << "Step 4";

       //std::vector<std::string> fileNames;
       //fileNames.push_back(pname.toStdString());
       //fileNames.push_back("C:/Users/Ayman/Documents/ZeyChem.pdf");


       //int status = p.merge(fileNames, pname.toStdString());
       //int status=p.remove(pname.toStdString(), i);
       //qDebug(p.getErrorMsg().c_str());

       /*for (int i = sz - 1; i >=0  ; i--)
          if (pages.testBit (i)){
              //int status = p.merge(fileNames, pname.toStdString());
              int status=p.remove(pname.toStdString(), i);
              qDebug(p.getErrorMsg().c_str());
          }*/

       qDebug() << "Remove page: " << pname << " : " << pages;
       int status=p.remove(pages, pname.toStdString());
       qDebug(p.getErrorMsg().c_str());

      f->setValid(false);
      f->load();

       //f->kill();
      //e = f->removePages (pages, del_info, count);
     // f->load();
      buildItem (ind);
      getDesk (ind.parent ())->dirty ();
      }
   return e;
   }


err_info *Desktopmodel::opUndeletePages (QModelIndex &ind, QBitArray &pages,
      QByteArray &del_info, int count)
   {
   File *f = getFile (ind);
   err_info *e = NULL;

   if (f)
      {
      e = f->restorePages (pages, del_info, count);
      buildItem (ind);
      }
   return e;
   }


void Desktopmodel::opChangeDir (QString &dirPath, QString &rootPath, int sizeWidth)
   {
   QModelIndex ind = refresh (dirPath, rootPath, sizeWidth);
   emit dirChanged (dirPath, ind);
   }


err_info *Desktopmodel::opRenameStack (const QModelIndex &index, QString &newname)
   {
   File *f = getFile (index);
   err_info *e = NULL;

   if (f)
      {
      f->kill();
      e = f->rename (newname, true);
      f->setValid(false);
      f->load();
      qDebug()<< "Rename: " << f->pathname() << " : " << f->filename() ;
      buildItem (index);
      getDesk (index.parent ())->dirty ();
      }
   return e;
   }


err_info *Desktopmodel::opRenamePage (const QModelIndex &index, int pagenum, QString &newname)
   {
   _modelconv->assertIsSource (0, &index, 0);
   File *f = getFile (index);
   err_info *e = NULL;

   if (f)
      {
      if (pagenum >= 0 && pagenum < f->pagecount ()) // which it should be!
         {
         e = f->renamePage (pagenum, newname);
         f->setPagenum (pagenum);
         }
      buildItem (index);
      }
   return e;
   }


err_info *Desktopmodel::emailFiles (QString &fname, QStringList &fnamelist, bool &can_delete, QString receiver)
{
   can_delete = true;

   QString mineStr = QCoreApplication::applicationDirPath() + "/mime.types";
   qDebug() << mineStr ;
   Email email(this, mineStr);

   email.setReceiverAddress(receiver);
  // qDebug() << "receiver: " <<receiver;
  // email.setSubject("Subject");
  // email.setMessageText("Body");

   for (int i = 0; i < fnamelist.size(); i++){
    email.addAttachment(fnamelist[i]);
   }
   email.openInDefaultProgram();

   return NULL;
// if we have more than one file, use a zip
   if (fnamelist.size () == 1)
      {
      fname = fnamelist [0];
      can_delete = false;   // we need to keep the file for the email program
      }
   else
      CALL (util_buildZip (fname, fnamelist));

// call thunderbird
   QStringList args;
   args << "-compose"
         << QString ("subject=Files,body=see attachment,attachment='file://%1'").arg (fname);

   QProcess *myProcess = new QProcess();
   myProcess->startDetached ("thunderbird", args);

   //FIXME check for error in process
   return NULL;
}


err_info *Desktopmodel::opEmailFiles (QModelIndex parent, QModelIndexList &slist,
      File::e_type type, QString receiver)
{
   int upto = 0;
   QStringList fname_list, tmp_list;

   UNUSED (parent);
   Operation op ("Packaging", slist.size (), 0);

   // name of first file will be used for the zip name
   QString fname = getFile (slist [0])->filename ();
   QString dir = QString ("%1/").arg (P_tmpdir);

   // put the path on front of each file
   err_info *e = NULL;

   type = File::Type_other;

   foreach (QModelIndex ind, slist)
   {
      File *f = getFile (ind);
      File *fnew;

      // if just copying, then get the filename
      if (type == File::Type_other)
         fname_list << f->pathname ();

      // else convert this file into a temporary one of the right type
      else
      {
         QString uniq;

         QString ext = File::typeExt (type);
         uniq = util_findNextFilename (f->leaf (), dir, ext);
         CALLB (f->duplicateToDesk (0, type, uniq, 3, op, fnew));
         fname_list << uniq;
         tmp_list << uniq;
      }
      op.setProgress (upto++);
   }
   bool can_delete = false;
   if (!e)
      e = emailFiles (fname, fname_list, can_delete, receiver);

   // delete the files if we are allowed
   if (can_delete)
      foreach (QString fname, tmp_list)
         {
         QFile f (fname);
         f.remove ();
         }
   return e;
}


void Desktopmodel::opUpdateRepositoryList (QString &dirpath, bool add_not_delete)
   {
   // Tell our controller (Desktopwidget) what to do
   emit updateRepositoryList (dirpath, add_not_delete);
   }
