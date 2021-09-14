/********************************************************************************
** Form generated from reading UI file 'printopt.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTOPT_H
#define UI_PRINTOPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Printopt
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *printOdd;
    QCheckBox *printEven;
    QCheckBox *sepSheet;
    QCheckBox *shrinkFit;
    QCheckBox *expandFit;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *printNumbers;
    QCheckBox *printNames;
    QCheckBox *printSeq;
    QCheckBox *printImageInfo;
    QCheckBox *printTimestamp;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *textFont;
    QLabel *label_3;
    QPushButton *textColour;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *fillColour;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *Printopt)
    {
        if (Printopt->objectName().isEmpty())
            Printopt->setObjectName(QString::fromUtf8("Printopt"));
        Printopt->resize(456, 267);
        Printopt->setFrameShape(QFrame::StyledPanel);
        Printopt->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(Printopt);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox = new QGroupBox(Printopt);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        printOdd = new QCheckBox(groupBox);
        printOdd->setObjectName(QString::fromUtf8("printOdd"));

        verticalLayout_2->addWidget(printOdd);

        printEven = new QCheckBox(groupBox);
        printEven->setObjectName(QString::fromUtf8("printEven"));

        verticalLayout_2->addWidget(printEven);

        sepSheet = new QCheckBox(groupBox);
        sepSheet->setObjectName(QString::fromUtf8("sepSheet"));
        sepSheet->setEnabled(true);

        verticalLayout_2->addWidget(sepSheet);

        shrinkFit = new QCheckBox(groupBox);
        shrinkFit->setObjectName(QString::fromUtf8("shrinkFit"));

        verticalLayout_2->addWidget(shrinkFit);

        expandFit = new QCheckBox(groupBox);
        expandFit->setObjectName(QString::fromUtf8("expandFit"));

        verticalLayout_2->addWidget(expandFit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Printopt);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        printNumbers = new QCheckBox(groupBox_2);
        printNumbers->setObjectName(QString::fromUtf8("printNumbers"));

        verticalLayout->addWidget(printNumbers);

        printNames = new QCheckBox(groupBox_2);
        printNames->setObjectName(QString::fromUtf8("printNames"));

        verticalLayout->addWidget(printNames);

        printSeq = new QCheckBox(groupBox_2);
        printSeq->setObjectName(QString::fromUtf8("printSeq"));

        verticalLayout->addWidget(printSeq);

        printImageInfo = new QCheckBox(groupBox_2);
        printImageInfo->setObjectName(QString::fromUtf8("printImageInfo"));

        verticalLayout->addWidget(printImageInfo);

        printTimestamp = new QCheckBox(groupBox_2);
        printTimestamp->setObjectName(QString::fromUtf8("printTimestamp"));

        verticalLayout->addWidget(printTimestamp);


        horizontalLayout_2->addWidget(groupBox_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        textFont = new QLineEdit(Printopt);
        textFont->setObjectName(QString::fromUtf8("textFont"));
        textFont->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textFont->sizePolicy().hasHeightForWidth());
        textFont->setSizePolicy(sizePolicy);
        textFont->setMaximumSize(QSize(60, 16777215));
        textFont->setReadOnly(false);

        horizontalLayout_3->addWidget(textFont);

        label_3 = new QLabel(Printopt);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        textColour = new QPushButton(Printopt);
        textColour->setObjectName(QString::fromUtf8("textColour"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(20);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textColour->sizePolicy().hasHeightForWidth());
        textColour->setSizePolicy(sizePolicy1);
        textColour->setMinimumSize(QSize(20, 20));
        textColour->setMaximumSize(QSize(20, 20));
        textColour->setBaseSize(QSize(20, 20));
        textColour->setIconSize(QSize(16, 16));
        textColour->setFlat(true);

        horizontalLayout_3->addWidget(textColour);

        label = new QLabel(Printopt);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        fillColour = new QPushButton(Printopt);
        fillColour->setObjectName(QString::fromUtf8("fillColour"));
        sizePolicy1.setHeightForWidth(fillColour->sizePolicy().hasHeightForWidth());
        fillColour->setSizePolicy(sizePolicy1);
        fillColour->setMinimumSize(QSize(20, 20));
        fillColour->setMaximumSize(QSize(20, 20));
        fillColour->setBaseSize(QSize(20, 20));
        fillColour->setIconSize(QSize(16, 16));
        fillColour->setFlat(true);

        horizontalLayout_3->addWidget(fillColour);

        label_2 = new QLabel(Printopt);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(148, 254, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(Printopt);

        textColour->setDefault(false);
        fillColour->setDefault(false);


        QMetaObject::connectSlotsByName(Printopt);
    } // setupUi

    void retranslateUi(QFrame *Printopt)
    {
        Printopt->setWindowTitle(QCoreApplication::translate("Printopt", "Paper Manager", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Printopt", "Page Control", nullptr));
#if QT_CONFIG(tooltip)
        printOdd->setToolTip(QCoreApplication::translate("Printopt", "Print odd pages", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        printOdd->setWhatsThis(QCoreApplication::translate("Printopt", "Select this to print the odd pages. If you turn this off, then odd pages will be omitted from the output", nullptr));
#endif // QT_CONFIG(whatsthis)
        printOdd->setText(QCoreApplication::translate("Printopt", "Odd Pages", nullptr));
#if QT_CONFIG(tooltip)
        printEven->setToolTip(QCoreApplication::translate("Printopt", "Print even pages", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        printEven->setWhatsThis(QCoreApplication::translate("Printopt", "Select this to print the even pages. If you turn this off, then even pages will be omitted from the output", nullptr));
#endif // QT_CONFIG(whatsthis)
        printEven->setText(QCoreApplication::translate("Printopt", "Even Pages", nullptr));
#if QT_CONFIG(tooltip)
        sepSheet->setToolTip(QCoreApplication::translate("Printopt", "In duplex mode, ensure that each stack starts on a new sheet", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        sepSheet->setWhatsThis(QCoreApplication::translate("Printopt", "When printing duplex (two sides to a sheet), stacks with an odd number of pages will finish with the back page unused.\n"
"Normally, the next stack to be printed would then start on this back page. This option causes the back page to be left blank, which means that every stack will start printing on a front page. It only has an effect when duplex is also enabled.", nullptr));
#endif // QT_CONFIG(whatsthis)
        sepSheet->setText(QCoreApplication::translate("Printopt", "Each stack on separate sheet", nullptr));
#if QT_CONFIG(tooltip)
        shrinkFit->setToolTip(QCoreApplication::translate("Printopt", "Shrink the page to fit on the paper", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        shrinkFit->setWhatsThis(QCoreApplication::translate("Printopt", "Select this option to shrink each page to fit within the printer margins. This ensures that nothing is missed out, at the cost of some reduction in size. This option is needed because scanners can scan right to the edge of the paper but printers generally cannot print there.\n"
"If you turn this option off, then some part of the page around the edged will be omitted. This is seldom a problem since the original is often blank in those areas anyway. Normally this option should be disabled.", nullptr));
#endif // QT_CONFIG(whatsthis)
        shrinkFit->setText(QCoreApplication::translate("Printopt", "Shrink to fit", nullptr));
#if QT_CONFIG(tooltip)
        expandFit->setToolTip(QCoreApplication::translate("Printopt", "Expand the page to fill the paper", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        expandFit->setWhatsThis(QCoreApplication::translate("Printopt", "For pages which are smaller than the output paper size, this option can be used to expand them up to fill the paper. The image is scaled up to just fit within the page.\n"
"\n"
"If shrink to fit is set, then this option will operate only within print margins, otherwise it will expand right to the edge of the paper, and some (hopefully blank) area around the image will not be printed.", nullptr));
#endif // QT_CONFIG(whatsthis)
        expandFit->setText(QCoreApplication::translate("Printopt", "Expand to fit", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Printopt", "Annotations", nullptr));
#if QT_CONFIG(tooltip)
        printNumbers->setToolTip(QCoreApplication::translate("Printopt", "Print page numbers at bottom right of page", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        printNumbers->setWhatsThis(QCoreApplication::translate("Printopt", "Select this option to print page numbers on each sheet. This will print the page number and total number of pages for each stack.", nullptr));
#endif // QT_CONFIG(whatsthis)
        printNumbers->setText(QCoreApplication::translate("Printopt", "Page numbers", nullptr));
#if QT_CONFIG(tooltip)
        printNames->setToolTip(QCoreApplication::translate("Printopt", "Print stack and page names", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        printNames->setWhatsThis(QCoreApplication::translate("Printopt", "Select this option to print the stack name and page name in the bottom centre of each page", nullptr));
#endif // QT_CONFIG(whatsthis)
        printNames->setText(QCoreApplication::translate("Printopt", "Stack and page names", nullptr));
#if QT_CONFIG(tooltip)
        printSeq->setToolTip(QCoreApplication::translate("Printopt", "Print job sequence number on every page", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        printSeq->setWhatsThis(QCoreApplication::translate("Printopt", "When printing a large number of stacks, this option allows every page to be globally numbered, from 1 to the total number of pages in the print job.\n"
"This is called the sequence number and it is useful for ensuring that all printed pages are kept together and in order. Select this option to print the sequence number (and total number of pages) on each page.", nullptr));
#endif // QT_CONFIG(whatsthis)
        printSeq->setText(QCoreApplication::translate("Printopt", "Sequence information", nullptr));
#if QT_CONFIG(tooltip)
        printImageInfo->setToolTip(QCoreApplication::translate("Printopt", "Print information about image size, resolution and depth", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        printImageInfo->setWhatsThis(QCoreApplication::translate("Printopt", "Select this option to print the image size in Megapixels, the width and height in pixels, the depth in bits per pixel (bpp, normally 2 for monochrome, 8 for greyscale and 24 for colour) and the size in bytes. This information is individual to each page. The total size in bytes of each stack is also displayed.\n"
"\n"
"The format is: aMP, bxc d ebpp, fMB of gMB\n"
"where\n"
"a is Megapixels\n"
"b is width in pixels\n"
"c is height in pixels\n"
"d is 'Mono/Grey/Colour'\n"
"e is size in bytes\n"
"f is size of stack in bytes", nullptr));
#endif // QT_CONFIG(whatsthis)
        printImageInfo->setText(QCoreApplication::translate("Printopt", "Image information", nullptr));
#if QT_CONFIG(tooltip)
        printTimestamp->setToolTip(QCoreApplication::translate("Printopt", "Print the date/time for each page", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        printTimestamp->setWhatsThis(QCoreApplication::translate("Printopt", "This option shows the date/time for each page. This is normally the timestamp for when it was first scanned into the computer.", nullptr));
#endif // QT_CONFIG(whatsthis)
        printTimestamp->setText(QCoreApplication::translate("Printopt", "Image timestamp", nullptr));
#if QT_CONFIG(tooltip)
        textFont->setToolTip(QCoreApplication::translate("Printopt", "Double click to set annoation font", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        textFont->setWhatsThis(QCoreApplication::translate("Printopt", "This is the font used to draw the text annotations. Double click on the sample text to change it", nullptr));
#endif // QT_CONFIG(whatsthis)
        textFont->setText(QCoreApplication::translate("Printopt", "abc123", nullptr));
        label_3->setText(QCoreApplication::translate("Printopt", "Text Font", nullptr));
#if QT_CONFIG(tooltip)
        textColour->setToolTip(QCoreApplication::translate("Printopt", "Click to set text colour", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        textColour->setWhatsThis(QCoreApplication::translate("Printopt", "This is the text colour for the printed annotation text. Click on the colour box to change it.", nullptr));
#endif // QT_CONFIG(whatsthis)
        textColour->setText(QString());
        label->setText(QCoreApplication::translate("Printopt", "Text Colour", nullptr));
#if QT_CONFIG(tooltip)
        fillColour->setToolTip(QCoreApplication::translate("Printopt", "Click to select background colour", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        fillColour->setWhatsThis(QCoreApplication::translate("Printopt", "This is the background colour for the printed annotation text. Click on the colour box to change it.", nullptr));
#endif // QT_CONFIG(whatsthis)
        fillColour->setText(QString());
        label_2->setText(QCoreApplication::translate("Printopt", "Text Background", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Printopt: public Ui_Printopt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTOPT_H
