TEMPLATE = app
LANGUAGE = C++
TARGET = Paperman
QT += widgets
QT += printsupport

DEFINES -= UNICODE

unix:target.path = /usr/bin
INSTALLS += target

RC_ICONS += "C:\msys64\home\Ayman\Paperman-working\paperman-master\icon.ico"

message ("Type 'make' to build paperman")

OCRINCPATH = /usr/local/include/nuance-omnipage-csdk-15.5
OCRLIBPATH = /usr/local/lib/nuance-omnipage-csdk-15.5

CONFIG += qt warn_on release
#QMAKE_LFLAGS += -static

LIBS += -lpoppler-qt5
INCLUDEPATH += /msys64/mingw32/include/poppler/qt5
INCLUDEPATH += /msys64/mingw32/include

# libraries for omnipage
#LIBS += -lkernelapi -Wl,-rpath-link,$$OCRLIBPATH,-rpath,$$OCRLIBPATH

LIBS += -lpodofo
LIBS += -ltiff -ljpeg

INCLUDEPATH += qi /usr/local/lib
INCLUDEPATH += $$OCRINCPATH

#LIBPATH += $$OCRLIBPATH
QMAKE_LIBDIR += $$OCRLIBPATH

INCLUDEPATH += /usr/include/podofo


INCLUDEPATH += /msys64/mingw32/include/PDFWriter/PDFWriter
LIBS += -L/msys64/mingw32/include/PDFWriter/Build/PDFWriter -lPDFWriter


INCLUDEPATH += /msys64/mingw32/include/PDFWriter/FreeType/include
LIBS += -L/msys64/mingw32/include/PDFWriter/Build/FreeType/ -lFreeType


INCLUDEPATH += /msys64/mingw32/include/PDFWriter/LibJpeg
LIBS += -L/msys64/mingw32/include/PDFWriter/Build/LibJpeg/ -lLibJpeg

INCLUDEPATH += /msys64/mingw32/include/PDFWriter/LibTiff
LIBS += -L/msys64/mingw32/include/PDFWriter/Build/LibTiff/ -lLibTiff

INCLUDEPATH += /msys64/mingw32/include/PDFWriter/ZLib
LIBS += -L/msys64/mingw32/include/PDFWriter/Build/ZLib/ -lZlib

INCLUDEPATH += /msys64/mingw32/include/PDFWriter/LibAesgm
LIBS += -L/msys64/mingw32/include/PDFWriter/Build/LibAesgm/ -lLibAesgm

INCLUDEPATH += /msys64/mingw32/include/PDFWriter/LibPng
LIBS += -L/msys64/mingw32/include/PDFWriter/Build/LibPng/ -lLibPng


#QMAKE_EXTRA_UNIX_TARGETS += dox
QMAKE_EXTRA_TARGETS += dox

RESOURCES = maxview.qrc

TRANSLATIONS = maxview_en.ts

HEADERS += desktopwidget.h \
    editablelabel.h \
    email.h \
    email_p.h \
    hummuspdfcore.h \
   mainwidget.h \
   desk.h \
    mimetypemanager.h \
    pagepos.h \
   pagewidget.h \
    pdfcore.h \
   qxmlconfig.h \
   qi/qextensionwidget.h \
   qi/qlistviewitemext.h \
   qi/qoptionscrollview.h \
   qi/scanarea.h \
   qi/checklistitemext.h \
   qi/previewupdatewidget.h \
   qi/ruler.h \
   qi/scanareacanvas.h \
   qi/imagebuffer.h \
   qi/imageiosupporter.h \
   qi/imagedetection.h \
   qi/scanareatemplate.h \
   qi/qdoublespinbox.h \
   qi/qcurvewidget.h \
   qi/canvasrubberrectangle.h \
   qi/qqualitydialog.h \
   qi/qimageioext.h \
   qi/qsplinearray.h \
   paperstack.h \
   err.h \
   mem.h \
   op.h \
   qi/sliderspin.h \
   desktopmodel.h \
   epeglite.h \
        options.h \
        mainwindow.h \
 pagetools.h \
 dirmodel.h \
 dirview.h \
 desktopview.h \
 desktopdelegate.h \
 desktopundo.h \
 printopt.h \
 pagemodel.h \
 pageview.h \
 pagedelegate.h \
 utils.h \
 ocr.h \
 file.h \
 filemax.h \
 filepdf.h \
 fileother.h \
 pdfio.h \
 ocrtess.h \
 ocromni.h \
 zip.h \
 zip_p.h \
 zipentry_p.h \
 senddialog.h \
 transfer.h \
    filejpeg.h \
    qlistwidgetitemiterator.h

SOURCES += \
    desktopwidget.cpp \
   desk.cpp \
    email.cpp \
    hummuspdfcore.cpp \
    mainwidget.cpp \
   maxview.cpp \
   md5.c \
    mimetypemanager.cpp \
    pagewidget.cpp \
    pdfcore.cpp \
   qxmlconfig.cpp \
   qi/qextensionwidget.cpp \
   qi/qlistviewitemext.cpp \
   qi/qoptionscrollview.cpp \
   qi/scanarea.cpp \
   qi/checklistitemext.cpp \
   qi/previewupdatewidget.cpp \
   qi/ruler.cpp \
   qi/scanareacanvas.cpp \
   qi/imagebuffer.cpp \
   qi/imageiosupporter.cpp \
   qi/imagedetection.cpp \
   qi/scanareatemplate.cpp \
   qi/qdoublespinbox.cpp \
   qi/qcurvewidget.cpp \
   qi/canvasrubberrectangle.cpp \
   qi/qqualitydialog.cpp \
   qi/qimageioext.cpp \
   qi/qsplinearray.cpp \
   paperstack.cpp \
   err.cpp \
   mem.cpp \
   op.cpp \
   qi/sliderspin.cpp \
   desktopmodel.cpp \
   epeglite.cpp \
        options.cpp \
        mainwindow.cpp \
 pagetools.cpp \
 dirmodel.cpp \
 dirview.cpp \
 desktopview.cpp \
 desktopdelegate.cpp \
 desktopundo.cpp \
 printopt.cpp \
 pagemodel.cpp \
 pageview.cpp \
 pagedelegate.cpp \
 utils.cpp \
 ocr.cpp \
 dmop.cpp \
 dmuserop.cpp \
 file.cpp \
 filemax.cpp \
 filepdf.cpp \
 fileother.cpp \
 pdfio.cpp \
 ocrtess.cpp \
 ocromni.cpp \
 zip.cpp \
 senddialog.cpp \
 transfer.cpp \
    filejpeg.cpp \
    qlistwidgetitemiterator.cpp

# add qtcreator debug macros if we are debugging
#SOURCES += /usr/share/qtcreator/gdbmacros/gdbmacros.cpp

FORMS = mainwindow.ui \
   about.ui \
   options.ui \
        printopt.ui \
        pagetools.ui \
        pageattr.ui \
        ocrbar.ui send.ui

# tif_fax3sm.c   - causes tifflib to break




#CONFIG  += qt warn_on release static

#release


unix {
    UI_DIR = .ui
    MOC_DIR = .moc
    OBJECTS_DIR = .obj
}

QT += xml

# custom target 'doc' in *.pro file
dox.target = doc
dox.commands = doxygen Doxyfile; \
    test -d doxydoc/html/images || mkdir doxydoc/html/images; \
    cp documentation/images/* doxydoc/html/images
dox.depends =
