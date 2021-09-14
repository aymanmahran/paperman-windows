/********************************************************************************
** Form generated from reading UI file 'pagetools.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGETOOLS_H
#define UI_PAGETOOLS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Pagetools
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *selectMode;
    QToolButton *moveMode;
    QToolButton *scanMode;
    QToolButton *infoMode;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *sendNow;
    QToolButton *save;
    QToolButton *revert;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *rleft;
    QToolButton *vflip;
    QToolButton *rright;
    QSpacerItem *horizontalSpacer;
    QToolButton *zoomFit;
    QToolButton *zoomOrig;
    QLineEdit *zoomLevel;
    QToolButton *zoomOut;
    QToolButton *zoomIn;

    void setupUi(QFrame *Pagetools)
    {
        if (Pagetools->objectName().isEmpty())
            Pagetools->setObjectName(QString::fromUtf8("Pagetools"));
        Pagetools->resize(492, 92);
        Pagetools->setFrameShape(QFrame::NoFrame);
        Pagetools->setFrameShadow(QFrame::Raised);
        Pagetools->setLineWidth(0);
        verticalLayout = new QVBoxLayout(Pagetools);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        selectMode = new QToolButton(Pagetools);
        selectMode->setObjectName(QString::fromUtf8("selectMode"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/pointer.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        selectMode->setIcon(icon);
        selectMode->setIconSize(QSize(24, 24));
        selectMode->setCheckable(true);
        selectMode->setChecked(true);
        selectMode->setAutoExclusive(true);

        horizontalLayout->addWidget(selectMode);

        moveMode = new QToolButton(Pagetools);
        moveMode->setObjectName(QString::fromUtf8("moveMode"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/hand.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        moveMode->setIcon(icon1);
        moveMode->setIconSize(QSize(24, 24));
        moveMode->setCheckable(true);
        moveMode->setAutoExclusive(true);

        horizontalLayout->addWidget(moveMode);

        scanMode = new QToolButton(Pagetools);
        scanMode->setObjectName(QString::fromUtf8("scanMode"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/scanmode.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        scanMode->setIcon(icon2);
        scanMode->setIconSize(QSize(24, 24));
        scanMode->setCheckable(true);
        scanMode->setAutoExclusive(true);

        horizontalLayout->addWidget(scanMode);

        infoMode = new QToolButton(Pagetools);
        infoMode->setObjectName(QString::fromUtf8("infoMode"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/info.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        infoMode->setIcon(icon3);
        infoMode->setIconSize(QSize(24, 24));
        infoMode->setCheckable(true);
        infoMode->setAutoExclusive(true);

        horizontalLayout->addWidget(infoMode);

        horizontalSpacer_2 = new QSpacerItem(13, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        sendNow = new QToolButton(Pagetools);
        sendNow->setObjectName(QString::fromUtf8("sendNow"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/email.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        sendNow->setIcon(icon4);
        sendNow->setIconSize(QSize(24, 24));
        sendNow->setCheckable(false);
        sendNow->setChecked(false);

        horizontalLayout->addWidget(sendNow);

        save = new QToolButton(Pagetools);
        save->setObjectName(QString::fromUtf8("save"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/document-save.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon5);
        save->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(save);

        revert = new QToolButton(Pagetools);
        revert->setObjectName(QString::fromUtf8("revert"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/document-revert.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        revert->setIcon(icon6);
        revert->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(revert);

        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rleft = new QToolButton(Pagetools);
        rleft->setObjectName(QString::fromUtf8("rleft"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/rleft.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        rleft->setIcon(icon7);
        rleft->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(rleft);

        vflip = new QToolButton(Pagetools);
        vflip->setObjectName(QString::fromUtf8("vflip"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/vflip.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        vflip->setIcon(icon8);
        vflip->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(vflip);

        rright = new QToolButton(Pagetools);
        rright->setObjectName(QString::fromUtf8("rright"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/rright.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        rright->setIcon(icon9);
        rright->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(rright);

        horizontalSpacer = new QSpacerItem(22, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        zoomFit = new QToolButton(Pagetools);
        zoomFit->setObjectName(QString::fromUtf8("zoomFit"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/zoom-best-fit.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        zoomFit->setIcon(icon10);
        zoomFit->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(zoomFit);

        zoomOrig = new QToolButton(Pagetools);
        zoomOrig->setObjectName(QString::fromUtf8("zoomOrig"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/zoom-original.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        zoomOrig->setIcon(icon11);
        zoomOrig->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(zoomOrig);

        zoomLevel = new QLineEdit(Pagetools);
        zoomLevel->setObjectName(QString::fromUtf8("zoomLevel"));
        zoomLevel->setMinimumSize(QSize(60, 0));
        zoomLevel->setMaximumSize(QSize(60, 16777215));
        zoomLevel->setMaxLength(6);
        zoomLevel->setFrame(true);

        horizontalLayout_2->addWidget(zoomLevel);

        zoomOut = new QToolButton(Pagetools);
        zoomOut->setObjectName(QString::fromUtf8("zoomOut"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/images/zoom-out.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        zoomOut->setIcon(icon12);
        zoomOut->setIconSize(QSize(24, 24));
        zoomOut->setAutoRepeat(true);

        horizontalLayout_2->addWidget(zoomOut);

        zoomIn = new QToolButton(Pagetools);
        zoomIn->setObjectName(QString::fromUtf8("zoomIn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(zoomIn->sizePolicy().hasHeightForWidth());
        zoomIn->setSizePolicy(sizePolicy);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/images/zoom-in.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        zoomIn->setIcon(icon13);
        zoomIn->setIconSize(QSize(24, 24));
        zoomIn->setAutoRepeat(true);

        horizontalLayout_2->addWidget(zoomIn);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Pagetools);

        QMetaObject::connectSlotsByName(Pagetools);
    } // setupUi

    void retranslateUi(QFrame *Pagetools)
    {
        Pagetools->setWindowTitle(QCoreApplication::translate("Pagetools", "Preview", nullptr));
#if QT_CONFIG(tooltip)
        selectMode->setToolTip(QCoreApplication::translate("Pagetools", "Select this tool to select pages", nullptr));
#endif // QT_CONFIG(tooltip)
        selectMode->setText(QCoreApplication::translate("Pagetools", "...", nullptr));
#if QT_CONFIG(tooltip)
        moveMode->setToolTip(QCoreApplication::translate("Pagetools", "Use this tool to reorder selected pages around", nullptr));
#endif // QT_CONFIG(tooltip)
        moveMode->setText(QCoreApplication::translate("Pagetools", "...", nullptr));
#if QT_CONFIG(tooltip)
        scanMode->setToolTip(QCoreApplication::translate("Pagetools", "Select this to show pages as they are scanned", nullptr));
#endif // QT_CONFIG(tooltip)
        scanMode->setText(QCoreApplication::translate("Pagetools", "...", nullptr));
#if QT_CONFIG(tooltip)
        infoMode->setToolTip(QCoreApplication::translate("Pagetools", "Info mode: Review and update author and notes", nullptr));
#endif // QT_CONFIG(tooltip)
        infoMode->setText(QCoreApplication::translate("Pagetools", "...", nullptr));
#if QT_CONFIG(tooltip)
        sendNow->setToolTip(QCoreApplication::translate("Pagetools", "Click this to send the paper stack to the default email address", nullptr));
#endif // QT_CONFIG(tooltip)
        sendNow->setText(QString());
#if QT_CONFIG(tooltip)
        save->setToolTip(QCoreApplication::translate("Pagetools", "Click this to save changed to the paper stack", nullptr));
#endif // QT_CONFIG(tooltip)
        save->setText(QCoreApplication::translate("Pagetools", "...", nullptr));
#if QT_CONFIG(tooltip)
        revert->setToolTip(QCoreApplication::translate("Pagetools", "Click this to revert the paper stack to the previous state and lose all your changes", nullptr));
#endif // QT_CONFIG(tooltip)
        revert->setText(QCoreApplication::translate("Pagetools", "...", nullptr));
#if QT_CONFIG(tooltip)
        rleft->setToolTip(QCoreApplication::translate("Pagetools", "Rotate the view 90 degrees to the left", nullptr));
#endif // QT_CONFIG(tooltip)
        rleft->setText(QCoreApplication::translate("Pagetools", "...", nullptr));
#if QT_CONFIG(tooltip)
        vflip->setToolTip(QCoreApplication::translate("Pagetools", "Flip the view vertically", nullptr));
#endif // QT_CONFIG(tooltip)
        vflip->setText(QCoreApplication::translate("Pagetools", "r", nullptr));
#if QT_CONFIG(tooltip)
        rright->setToolTip(QCoreApplication::translate("Pagetools", "Rotate the view 90 degrees to the right", nullptr));
#endif // QT_CONFIG(tooltip)
        rright->setText(QCoreApplication::translate("Pagetools", "...", nullptr));
#if QT_CONFIG(tooltip)
        zoomFit->setToolTip(QCoreApplication::translate("Pagetools", "Zoom the image to fit within the window", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomFit->setText(QCoreApplication::translate("Pagetools", "...", nullptr));
#if QT_CONFIG(tooltip)
        zoomOrig->setToolTip(QCoreApplication::translate("Pagetools", "Zoom the image to the smallest which still allow reading", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomOrig->setText(QCoreApplication::translate("Pagetools", "...", nullptr));
#if QT_CONFIG(tooltip)
        zoomLevel->setToolTip(QCoreApplication::translate("Pagetools", "Enter zoom level here", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomLevel->setInputMask(QString());
        zoomLevel->setText(QCoreApplication::translate("Pagetools", "100%", nullptr));
#if QT_CONFIG(tooltip)
        zoomOut->setToolTip(QCoreApplication::translate("Pagetools", "Zoom out", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomOut->setText(QCoreApplication::translate("Pagetools", "...", nullptr));
#if QT_CONFIG(tooltip)
        zoomIn->setToolTip(QCoreApplication::translate("Pagetools", "Zoom in", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomIn->setText(QCoreApplication::translate("Pagetools", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pagetools: public Ui_Pagetools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGETOOLS_H
