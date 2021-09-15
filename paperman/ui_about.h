/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QLabel *textLabel1;
    QLabel *version;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(618, 459);
        verticalLayout = new QVBoxLayout(About);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/maxview.png")));
        label->setScaledContents(false);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        scrollArea = new QScrollArea(About);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 582, 449));
        horizontalLayout_3 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        textLabel1 = new QLabel(scrollAreaWidgetContents);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setTextFormat(Qt::RichText);
        textLabel1->setWordWrap(true);

        horizontalLayout_3->addWidget(textLabel1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        version = new QLabel(About);
        version->setObjectName(QString::fromUtf8("version"));
        version->setFrameShape(QFrame::Panel);

        verticalLayout->addWidget(version);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ok = new QPushButton(About);
        ok->setObjectName(QString::fromUtf8("ok"));

        horizontalLayout->addWidget(ok);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        version->raise();
        scrollArea->raise();

        retranslateUi(About);
        QObject::connect(ok, SIGNAL(clicked()), About, SLOT(accept()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "About Paper Manager", nullptr));
        About->setWindowIconText(QString());
        label->setText(QString());
        textLabel1->setText(QCoreApplication::translate("About", "Paper Manager aims to turn your computer into an electronic filing cabinet for paper.\n"
"\n"
"Paper Manager allows you to:\n"
"\n"
"<ul>\n"
"<li>Quickly scan and file paper into your computer\n"
"<li>Read and write PaperPort .max files\n"
"<li>Stack, arrange and name your scanned paper\n"
"<li>Easily print and view your scanned paper<li>Convert to / from PDF and other formats</ul>\n"
"\n"
"Paper Manager version 1.0 by Simon Glass &lt;sglass@designa-electronics.com&gt;\n"
"<p>\n"
"<p>TIFF code Copyright (c) 1990-1996 Sam Leffler, Copyright (c) 1991-1996 Silicon Graphics, Inc.\n"
"<p>Quite insane copyright (C) 2000 by Michael Herder crapsite@gmx.net\n"
"<p>podofo Copyright (C) 2006 by Dominik Seichter &lt;domseichter@web.de&gt;\n"
"<p>Zip library Copyright (C) 2007-2008 Angius Fabrizio. All rights reserved.\n"
"<p>md5 Library Copyright (C) 1995, 1996, 2001, 2003, 2004 Free Software Foundation, Inc.\n"
"<p>epeglite Created by Marc Liyanage on Fri Jan 16 2004. Copyright (c) 2004 All rights reserved.\n"
"<p>epegli"
                        "te is a veneer on EPEG from enlightenment - see http://www.enlightenment.org/\n"
"", nullptr));
        version->setText(QCoreApplication::translate("About", "Version 0.x", nullptr));
        ok->setText(QCoreApplication::translate("About", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
