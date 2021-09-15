/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "sliderspin.h"

QT_BEGIN_NAMESPACE

class Ui_Options
{
public:
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *scan;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *vboxLayout;
    QCheckBox *jpeg;
    QHBoxLayout *hboxLayout;
    QCheckBox *limit;
    QSpinBox *single;
    QHBoxLayout *hboxLayout1;
    QCheckBox *stackLimit;
    QSpinBox *stackCount;
    QGroupBox *groupBox1;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel3;
    QComboBox *blank;
    SliderSpin *threshold;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem;
    QLabel *coverageStr_2;
    QLineEdit *coverageStr;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem1;
    QPushButton *cancel;
    QPushButton *ok;
    QWidget *print;

    void setupUi(QDialog *Options)
    {
        if (Options->objectName().isEmpty())
            Options->setObjectName(QString::fromUtf8("Options"));
        Options->resize(318, 338);
        horizontalLayout_2 = new QHBoxLayout(Options);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabWidget = new QTabWidget(Options);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        scan = new QWidget();
        scan->setObjectName(QString::fromUtf8("scan"));
        horizontalLayout = new QHBoxLayout(scan);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        jpeg = new QCheckBox(scan);
        jpeg->setObjectName(QString::fromUtf8("jpeg"));

        vboxLayout->addWidget(jpeg);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        limit = new QCheckBox(scan);
        limit->setObjectName(QString::fromUtf8("limit"));
        limit->setMaximumSize(QSize(170, 32767));

        hboxLayout->addWidget(limit);

        single = new QSpinBox(scan);
        single->setObjectName(QString::fromUtf8("single"));

        hboxLayout->addWidget(single);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        stackLimit = new QCheckBox(scan);
        stackLimit->setObjectName(QString::fromUtf8("stackLimit"));
        stackLimit->setMaximumSize(QSize(170, 32767));

        hboxLayout1->addWidget(stackLimit);

        stackCount = new QSpinBox(scan);
        stackCount->setObjectName(QString::fromUtf8("stackCount"));

        hboxLayout1->addWidget(stackCount);


        vboxLayout->addLayout(hboxLayout1);

        groupBox1 = new QGroupBox(scan);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        hboxLayout2 = new QHBoxLayout(groupBox1);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(11, 11, 11, 11);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        textLabel3 = new QLabel(groupBox1);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        hboxLayout3->addWidget(textLabel3);

        blank = new QComboBox(groupBox1);
        blank->addItem(QString());
        blank->addItem(QString());
        blank->addItem(QString());
        blank->setObjectName(QString::fromUtf8("blank"));

        hboxLayout3->addWidget(blank);


        vboxLayout1->addLayout(hboxLayout3);

        threshold = new SliderSpin(groupBox1);
        threshold->setObjectName(QString::fromUtf8("threshold"));

        vboxLayout1->addWidget(threshold);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem);

        coverageStr_2 = new QLabel(groupBox1);
        coverageStr_2->setObjectName(QString::fromUtf8("coverageStr_2"));
        coverageStr_2->setWordWrap(false);

        hboxLayout4->addWidget(coverageStr_2);

        coverageStr = new QLineEdit(groupBox1);
        coverageStr->setObjectName(QString::fromUtf8("coverageStr"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(220, 220, 220, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(242, 242, 242, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(78, 78, 78, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(183, 183, 183, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush6(QColor(84, 112, 152, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        QBrush brush7(QColor(0, 0, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush7);
        QBrush brush8(QColor(255, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush8);
        QBrush brush9(QColor(128, 128, 128, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush10(QColor(0, 0, 128, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush8);
        coverageStr->setPalette(palette);
        coverageStr->setReadOnly(true);

        hboxLayout4->addWidget(coverageStr);


        vboxLayout1->addLayout(hboxLayout4);


        hboxLayout2->addLayout(vboxLayout1);


        vboxLayout->addWidget(groupBox1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        spacerItem1 = new QSpacerItem(131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem1);

        cancel = new QPushButton(scan);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        hboxLayout5->addWidget(cancel);

        ok = new QPushButton(scan);
        ok->setObjectName(QString::fromUtf8("ok"));

        hboxLayout5->addWidget(ok);


        vboxLayout->addLayout(hboxLayout5);


        horizontalLayout->addLayout(vboxLayout);

        tabWidget->addTab(scan, QString());
        print = new QWidget();
        print->setObjectName(QString::fromUtf8("print"));
        tabWidget->addTab(print, QString());

        horizontalLayout_2->addWidget(tabWidget);


        retranslateUi(Options);
        QObject::connect(ok, SIGNAL(clicked()), Options, SLOT(ok_clicked()));
        QObject::connect(cancel, SIGNAL(clicked()), Options, SLOT(cancel_clicked()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Options);
    } // setupUi

    void retranslateUi(QDialog *Options)
    {
        Options->setWindowTitle(QCoreApplication::translate("Options", "Scan Options", nullptr));
        jpeg->setText(QCoreApplication::translate("Options", "Use scanner JPEG compression", nullptr));
        limit->setText(QCoreApplication::translate("Options", "Limit pages to scan", nullptr));
        stackLimit->setText(QCoreApplication::translate("Options", "Limit pages per stack", nullptr));
        groupBox1->setTitle(QCoreApplication::translate("Options", "Automatic Duplexing", nullptr));
        textLabel3->setText(QCoreApplication::translate("Options", "Blank pages", nullptr));
        blank->setItemText(0, QCoreApplication::translate("Options", "Record", nullptr));
        blank->setItemText(1, QCoreApplication::translate("Options", "Ignore if back page", nullptr));
        blank->setItemText(2, QCoreApplication::translate("Options", "Ignore", nullptr));

        coverageStr_2->setText(QCoreApplication::translate("Options", "Coverage", nullptr));
        coverageStr->setText(QCoreApplication::translate("Options", "3.4%", nullptr));
        cancel->setText(QCoreApplication::translate("Options", "Cancel", nullptr));
        ok->setText(QCoreApplication::translate("Options", "OK", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(scan), QCoreApplication::translate("Options", "Scan", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(print), QCoreApplication::translate("Options", "Print", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Options: public Ui_Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
