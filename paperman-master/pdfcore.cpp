#include "pdfcore.h"
#include <podofo/podofo.h>
#include <sstream>
#include <cmath>
#include <iostream>
#include <QDebug>

using namespace PoDoFo;

PDFCore::PDFCore(){
    errorMsg="None";
}

int PDFCore::merge(std::vector<std::string> &files, std::string dest){
    PdfMemDocument mergingFile;
    try{
        for (unsigned int i=0;i<files.size();i++){
            PdfMemDocument input(files[i].c_str());
            mergingFile.Append(input);
        }
        mergingFile.Write(dest.c_str());
        return 0;
    }
    catch(PdfError &e){
        e.PrintErrorMsg();
        errorMsg=PdfError::ErrorMessage(e.GetError());
        return e.GetError();
    }
}


//copies all the resources, this needs to be fixed
int PDFCore::split(std::string srcPath,std::string destDir,std::string baseFileName,bool split){
    try{
        PdfMemDocument srcFile(srcPath.c_str());
        int count=srcFile.GetPageCount();

        //
        //PdfParser parser(&vecObj,srcPath.c_str());

        std::cout<<srcPath<<std::endl;
        std::cout<<destDir<<std::endl;
        std::cout<<baseFileName<<std::endl;
        std::cout<<count<<std::endl;
        for (int i=0;i<count;i++){
            std::string fullDest=destDir+'/'+baseFileName+"_"+intZeroPadding(i+1,count);
            std::cout<<fullDest<<std::endl;

            if (split){
                //if cut in half, set the media box to half
                PdfRect rectLeft=srcFile.GetPage(i)->GetMediaBox();
                rectLeft.SetWidth(rectLeft.GetWidth()/2);
                PdfRect rectRight=srcFile.GetPage(i)->GetMediaBox();
                rectRight.SetWidth(rectRight.GetWidth()/2);
                rectRight.SetLeft(rectRight.GetWidth());
                PdfObject rLeft;
                rectLeft.ToVariant(rLeft);
                PdfObject rRight;
                rectRight.ToVariant(rRight);
                PdfMemDocument fileA;
                fileA.InsertPages(srcFile,i,1);
                PdfPage *pageA=fileA.GetPage(0);
                pageA->GetObject()->GetDictionary().AddKey(PdfName("MediaBox"),rLeft);
                fileA.Write(std::string(fullDest+"_A.pdf").c_str());
                PdfMemDocument fileB;
                fileB.InsertPages(srcFile,i,1);
                PdfPage *pageB=fileB.GetPage(0);
                pageB->GetObject()->GetDictionary().AddKey(PdfName("MediaBox"),rRight);
                fileB.Write(std::string(fullDest+"_B.pdf").c_str());
            }
            else{
                PdfMemDocument newFile;
                newFile.InsertPages(srcFile,i,1);
                fullDest+=".pdf";
                newFile.Write(fullDest.c_str());
            }


        }
        return 0;
    }
    catch(PdfError &e){
        e.PrintErrorMsg();
        errorMsg=PdfError::ErrorMessage(e.GetError());
        return e.GetError();
    }
}


int PDFCore::remove(std::string srcPath, int num){

    PdfMemDocument newFile;
    try{
        PdfMemDocument srcFile(srcPath.c_str());
        newFile.Append(srcFile);
        //int count=srcFile.GetPageCount();
        newFile.DeletePages (num, 1);
        newFile.Write(srcPath.c_str());
        return 0;
    }
    catch(PdfError &e){
        qDebug() << "error yes";
        e.PrintErrorMsg();
        errorMsg=PdfError::ErrorMessage(e.GetError());
        return e.GetError();
    }
}


int PDFCore::reorder(int num, int list, std::string path){

    PdfMemDocument first, second, third, final;
    try{
        PdfMemDocument srcFile(path.c_str());
        first.Append(srcFile);
        second.Append(srcFile);
        third.Append(srcFile);

        if(num < list){
            int sz = srcFile.GetPageCount();
            first.DeletePages(num - 1, sz - (num - 1));
            second.DeletePages(list - 1, sz - (list - 1));
            second.DeletePages(0, num);
            third.DeletePages(0, list);
            final.Append(first);
            final.InsertPages(srcFile, list - 1, 1);
            final.InsertPages(srcFile, num - 1, 1);
            final.Append(second);
            final.Append(third);

        }

        else{
            int sz = srcFile.GetPageCount();
            first.DeletePages(list - 1, sz - (list - 1));
            second.DeletePages(num - 1, sz - (num - 1));
            second.DeletePages(0, list);
            third.DeletePages(0, num);
            final.Append(first);
            final.Append(second);
            final.InsertPages(srcFile, list - 1, 1);
            final.InsertPages(srcFile, num - 1, 1);
            final.Append(third);

        }
           /* for(int i = sz ; i > 0 ; i--){
                if(list.contains(i))
                    newFile.DeletePages(i - 1, 1);
            }
            */
        final.Write(path.c_str());
        return 0;
    }
    catch(PdfError &e){
        qDebug() << "error yes";
        e.PrintErrorMsg();
        errorMsg=PdfError::ErrorMessage(e.GetError());
        return e.GetError();
    }
}

//int to string then add zeroes to match the length of c
//this helps viewing files sorted by filename (so _020 is placed after _019 instead of _1)
std::string PDFCore::intZeroPadding(int i,int c){
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

std::string PDFCore::getErrorMsg(){
    return errorMsg;
}
