#include "hummuspdfcore.h"
#include <sstream>
#include <cmath>
#include <iostream>
#include <QFile>
#include <QDebug>
#include <QBitArray>
#include <err.h>
#include <PDFWriter/PDFWriter/PDFWriter.h>
#include <PDFWriter/PDFWriter/PDFPage.h>
#include <PDFWriter/PDFWriter/PDFWriter.h>
#include <PDFWriter/PDFWriter/PDFPageInput.h>

HummusPDFCore::HummusPDFCore(){
    errorMsg="None";
}

int HummusPDFCore::merge(std::vector<std::string> &files, std::string dest){
    PDFWriter pdfWriter;

    EStatusCode status;

    status=pdfWriter.StartPDF(dest, ePDFVersion13);

    if (status!=PDFHummus::eSuccess){
        errorMsg="failed to start pdf "+dest;
        return status;
    }

    for (unsigned int i=0;i<files.size();i++){
        status=pdfWriter.AppendPDFPagesFromPDF(files[i], PDFPageRange()).first;
        if (status!=PDFHummus::eSuccess){
            errorMsg="failed to merge "+files[i]+"\n";
            break;
        }
    }
    status=pdfWriter.EndPDF();
    errorMsg="";
    if (status!=PDFHummus::eSuccess)
        errorMsg+="failed to end pdf "+dest;

    return status;
}


int HummusPDFCore::split(std::string srcPath,std::string destDir,std::string baseFileName,bool split){
    //https://github.com/galkahana/PDF-Writer/wiki/PDF-Parsing
    EStatusCode status;
    InputFile pdfFile;
    PDFParser parser;
    status=pdfFile.OpenFile(srcPath);
    if (status!=PDFHummus::eSuccess){
        errorMsg="failed to open pdf";
        return status;
    }
    status=parser.StartPDFParsing(pdfFile.GetInputStream());
    if (status!=PDFHummus::eSuccess){
        errorMsg="failed to parse pdf";
        return status;
    }

    unsigned int long pageNum=parser.GetPagesCount();
    if (!pageNum){
        errorMsg="pdf is empty or failed to parse content";
        return PDFHummus::eFailure;
    }
    errorMsg="";

    //pageNum = 1;

    std::vector<std::string> fileNames;

    for (unsigned int long i=0;i<pageNum;i++){
        //std::string fullDest=destDir+'/'+baseFileName+"_"+intZeroPadding(i+1,pageNum);
        std::string fullDest=destDir+'/'+baseFileName;
        if(i>0){
            fullDest = fullDest + "_" + intZeroPadding(i,pageNum);
            fileNames.push_back(fullDest + ".pdf");
        }
        PDFPageInput pageInput(&parser,parser.ParsePage(i));
        PDFRectangle mediaBox=pageInput.GetMediaBox();

        if (split){
            PDFPageRange singlePageRange;
            singlePageRange.mType = PDFPageRange::eRangeTypeSpecific;
            singlePageRange.mSpecificRanges.push_back(ULongAndULong(i,i));

            PDFWriter pdfWriter1;
            PDFPage* p1=new PDFPage();
            status=pdfWriter1.StartPDF(fullDest+"_A.pdf", ePDFVersion13);

            if (status!=PDFHummus::eSuccess){
                goto error;
            }

            PDFRectangle leftRect=mediaBox;
            leftRect.UpperRightX=leftRect.UpperRightX/2;
            p1->SetMediaBox(leftRect);

            status=pdfWriter1.MergePDFPagesToPage(p1,srcPath,singlePageRange);
            if (status!=PDFHummus::eSuccess)
                goto error;

            status=pdfWriter1.WritePageAndRelease(p1);
            if (status!=PDFHummus::eSuccess)
                goto error;

            status=pdfWriter1.EndPDF();
            if (status!=PDFHummus::eSuccess)
                goto error;


            PDFWriter pdfWriter2;
            PDFPage* p2=new PDFPage();

            status=pdfWriter2.StartPDF(fullDest+"_B.pdf", ePDFVersion13);
            if (status!=PDFHummus::eSuccess)
                goto error;

            PDFRectangle rightRect=mediaBox;
            rightRect.LowerLeftX=rightRect.UpperRightX/2;
            p2->SetMediaBox(rightRect);
            status=pdfWriter2.MergePDFPagesToPage(p2,srcPath,singlePageRange);
            if (status!=PDFHummus::eSuccess)
                goto error;

            status=pdfWriter2.WritePageAndRelease(p2);
            if (status!=PDFHummus::eSuccess)
                goto error;

            status=pdfWriter2.EndPDF();
            if (status!=PDFHummus::eSuccess)
                goto error;
        }

        else{

            PDFWriter pdfWriter;
            PDFPage* page=new PDFPage();
            status=pdfWriter.StartPDF(fullDest+".pdf", ePDFVersion13);
            page->SetMediaBox(mediaBox);
            PDFPageRange singlePageRange;

            singlePageRange.mType = PDFPageRange::eRangeTypeSpecific;
            singlePageRange.mSpecificRanges.push_back(ULongAndULong(i,i));

            status=pdfWriter.MergePDFPagesToPage(page,srcPath,singlePageRange);
            if (status!=PDFHummus::eSuccess)
                goto error;

            status=pdfWriter.WritePageAndRelease(page);
            if (status!=PDFHummus::eSuccess)
                goto error;

            status=pdfWriter.EndPDF();
            if (status!=PDFHummus::eSuccess)
                goto error;

        }
        continue;
error:
        errorMsg+="failed to split page "+intZeroPadding(i+1,pageNum)+"\n";

    }

    merge(fileNames, srcPath);

    for (unsigned int i=0;i<fileNames.size();i++){
        QString f = QString::fromStdString(fileNames[i]);
        QFile file (f);

        if (file.exists () && !file.remove ())
           err_make (ERRFN, ERR_could_not_remove_file2,
                     file.fileName ().toLatin1 ().constData(),
                     file.errorString ().toLatin1 ().constData());
    }

    return status;
}


int HummusPDFCore::reorder(int num, int list, std::string srcPath){
    //https://github.com/galkahana/PDF-Writer/wiki/PDF-Parsing
    EStatusCode status;
    InputFile pdfFile;
    PDFParser parser;
    status=pdfFile.OpenFile(srcPath);
    if (status!=PDFHummus::eSuccess){
        errorMsg="failed to open pdf";
        return status;
    }
    status=parser.StartPDFParsing(pdfFile.GetInputStream());
    if (status!=PDFHummus::eSuccess){
        errorMsg="failed to parse pdf";
        return status;
    }

    unsigned int long pageNum=parser.GetPagesCount();
    if (!pageNum){
        errorMsg="pdf is empty or failed to parse content";
        return PDFHummus::eFailure;
    }
    errorMsg="";

    //pageNum = 1;

    std::vector<std::string> fileNames;

    QString src = QString::fromStdString(srcPath);
    QStringList sp = src.split("/");
    QStringList ps = sp[sp.size()-1].split(".");

    std::string baseFileName = ps[0].toStdString();

    std::string destDir = "";

    for(int i = 0; i < sp.size() - 1; i++){
        destDir = destDir + sp[i].toStdString() + "/";
    }

    qDebug() << "Test: " << QString::fromStdString(destDir) << " : " << QString::fromStdString(baseFileName);

   // split(srcPath, destDir, baseFileName, false);
   // return 0;
    for (unsigned int long i=0;i<pageNum;i++){
        //std::string fullDest=destDir+'/'+baseFileName+"_"+intZeroPadding(i+1,pageNum);
        std::string fullDest=destDir+baseFileName;
        fullDest = fullDest + "processed_" + intZeroPadding(i+1,pageNum);
        fileNames.push_back(fullDest + ".pdf");

        PDFPageInput pageInput(&parser,parser.ParsePage(i));
        PDFRectangle mediaBox=pageInput.GetMediaBox();

        PDFWriter pdfWriter;
        PDFPage* page=new PDFPage();
        status=pdfWriter.StartPDF(fullDest+".pdf", ePDFVersion13);
        page->SetMediaBox(mediaBox);
        PDFPageRange singlePageRange;

        singlePageRange.mType = PDFPageRange::eRangeTypeSpecific;
        singlePageRange.mSpecificRanges.push_back(ULongAndULong(i,i));

        //qDebug() << "Tetete";


        status=pdfWriter.MergePDFPagesToPage(page,srcPath,singlePageRange);
        if (status!=PDFHummus::eSuccess)
            goto error;

        status=pdfWriter.WritePageAndRelease(page);
        if (status!=PDFHummus::eSuccess)
            goto error;

        status=pdfWriter.EndPDF();
        if (status!=PDFHummus::eSuccess)
            goto error;

        //qDebug() << "Tetete";
        continue;
error:
        errorMsg+="failed to split page "+intZeroPadding(i+1,pageNum)+"\n";

    }

    std::vector<std::string> ordered;

    num = num - 1;
    list = list - 1;
    if(num < list){
        for(int i = 0; i < num; i++){
            ordered.push_back(fileNames[i]);
        }
        ordered.push_back(fileNames[list]);
        ordered.push_back(fileNames[num]);
        for(int i = num + 1; i < list; i++){
            ordered.push_back(fileNames[i]);
        }
        for(int i = list + 1; i < fileNames.size(); i++){
            ordered.push_back(fileNames[i]);
        }
    }
    else{
        for(int i = 0; i < list; i++){
            ordered.push_back(fileNames[i]);
        }
        for(int i = list + 1; i < num; i++){
            ordered.push_back(fileNames[i]);
        }
        ordered.push_back(fileNames[num]);
        ordered.push_back(fileNames[list]);
        for(int i = num + 1; i < fileNames.size(); i++){
            ordered.push_back(fileNames[i]);
        }

    }

    merge(ordered, srcPath);

    for (unsigned int i=0;i<fileNames.size();i++){
        QString f = QString::fromStdString(fileNames[i]);
        QFile file (f);

        if (file.exists () && !file.remove ())
           err_make (ERRFN, ERR_could_not_remove_file2,
                     file.fileName ().toLatin1 ().constData(),
                     file.errorString ().toLatin1 ().constData());
    }

    return status;
}

int HummusPDFCore::remove(QBitArray pages, std::string srcPath){


    EStatusCode status;
    InputFile pdfFile;
    PDFParser parser;
    status=pdfFile.OpenFile(srcPath);
    if (status!=PDFHummus::eSuccess){
        errorMsg="failed to open pdf";
        return status;
    }
    status=parser.StartPDFParsing(pdfFile.GetInputStream());
    if (status!=PDFHummus::eSuccess){
        errorMsg="failed to parse pdf";
        return status;
    }

    unsigned int long pageNum=parser.GetPagesCount();
    if (!pageNum){
        errorMsg="pdf is empty or failed to parse content";
        return PDFHummus::eFailure;
    }
    errorMsg="";

    //pageNum = 1;

    std::vector<std::string> fileNames;

   /* for (int i = sz - 1; i >=0  ; i--)
       if (pages.testBit (i)){
           int status=p.remove(pname.toStdString(), i);
           qDebug(p.getErrorMsg().c_str());
       }*/

    QString src = QString::fromStdString(srcPath);
    QStringList sp = src.split("/");
    QStringList ps = sp[sp.size()-1].split(".");

    std::string baseFileName = ps[0].toStdString();

    std::string destDir = "";

    for(int i = 0; i < sp.size() - 1; i++){
        destDir = destDir + sp[i].toStdString() + "/";
    }

    std::vector<std::string> fn;

    for (unsigned int long i=0; i<pageNum; i++){

        if (!pages.testBit (i)){

            std::string fullDest=destDir+baseFileName;
            fullDest = fullDest + "processed_" + intZeroPadding(i+1,pageNum);
            fn.push_back(fullDest + ".pdf");

            PDFPageInput pageInput(&parser,parser.ParsePage(i));
            PDFRectangle mediaBox=pageInput.GetMediaBox();

            PDFWriter pdfWriter;
            PDFPage* page=new PDFPage();
            status=pdfWriter.StartPDF(fullDest + ".pdf", ePDFVersion13);
            page->SetMediaBox(mediaBox);
            PDFPageRange singlePageRange;

            singlePageRange.mType = PDFPageRange::eRangeTypeSpecific;
            singlePageRange.mSpecificRanges.push_back(ULongAndULong(i,i));

            status=pdfWriter.MergePDFPagesToPage(page,srcPath,singlePageRange);
            if (status!=PDFHummus::eSuccess)
                goto error;

            status=pdfWriter.WritePageAndRelease(page);
            if (status!=PDFHummus::eSuccess)
                goto error;

            status=pdfWriter.EndPDF();
            if (status!=PDFHummus::eSuccess)
                goto error;

            continue;
    error:
            errorMsg+="failed to split page "+intZeroPadding(i+1,pageNum)+"\n";
        }
    }

    /*status=pdfWriter.EndPDF();
    if (status!=PDFHummus::eSuccess)
        errorMsg+="failed to split page";*/
    merge(fn, srcPath);

    for (unsigned int i=0;i<fn.size();i++){
        QString f = QString::fromStdString(fn[i]);
        QFile file (f);

        if (file.exists () && !file.remove ())
           err_make (ERRFN, ERR_could_not_remove_file2,
                     file.fileName ().toLatin1 ().constData(),
                     file.errorString ().toLatin1 ().constData());
    }

    /*QString f = QString::fromStdString(srcPath);
    QFile file (f);

    if (file.exists () && !file.remove ())
       err_make (ERRFN, ERR_could_not_remove_file2,
                 file.fileName ().toLatin1 ().constData(),
                 file.errorString ().toLatin1 ().constData());

    QString g = QString::fromStdString(destDir + baseFileName + "(test).pdf");
    QFile gile (g);

    if (gile.exists () && !gile.rename (QString::fromStdString(srcPath)))
       err_make (ERRFN, ERR_could_not_remove_file2,
                 file.fileName ().toLatin1 ().constData(),
                 file.errorString ().toLatin1 ().constData());*/


    return status;
}


//int to string then add zeroes to match the length of c
//this helps viewing files sorted by filename (so _020 is placed after _019 instead of _1)
std::string HummusPDFCore::intZeroPadding(int i,int c){
    std::stringstream ss;
    ss<<i;
    std::string baseNum= ss.str();
    int iDigit=(int)log10(i)+1;
    int cDigit=(int)(log10(c))+1;
    while(iDigit!=cDigit){
        baseNum='0'+baseNum;
        iDigit++;
    }
    return baseNum;
}

std::string HummusPDFCore::getErrorMsg(){
    return errorMsg;
}
