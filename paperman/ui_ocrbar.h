/********************************************************************************
** Form generated from reading UI file 'ocrbar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCRBAR_H
#define UI_OCRBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Ocrbar
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *ocr;
    QToolButton *flipView;
    QToolButton *clear;
    QToolButton *copy;
    QSpacerItem *horizontalSpacer;

    void setupUi(QFrame *Ocrbar)
    {
        if (Ocrbar->objectName().isEmpty())
            Ocrbar->setObjectName(QString::fromUtf8("Ocrbar"));
        Ocrbar->resize(303, 57);
        Ocrbar->setFrameShape(QFrame::NoFrame);
        Ocrbar->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(Ocrbar);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ocr = new QToolButton(Ocrbar);
        ocr->setObjectName(QString::fromUtf8("ocr"));

        horizontalLayout->addWidget(ocr);

        flipView = new QToolButton(Ocrbar);
        flipView->setObjectName(QString::fromUtf8("flipView"));

        horizontalLayout->addWidget(flipView);

        clear = new QToolButton(Ocrbar);
        clear->setObjectName(QString::fromUtf8("clear"));

        horizontalLayout->addWidget(clear);

        copy = new QToolButton(Ocrbar);
        copy->setObjectName(QString::fromUtf8("copy"));

        horizontalLayout->addWidget(copy);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Ocrbar);

        QMetaObject::connectSlotsByName(Ocrbar);
    } // setupUi

    void retranslateUi(QFrame *Ocrbar)
    {
        Ocrbar->setWindowTitle(QCoreApplication::translate("Ocrbar", "Frame", nullptr));
#if QT_CONFIG(tooltip)
        ocr->setToolTip(QCoreApplication::translate("Ocrbar", "Click to turn the image into editable text", nullptr));
#endif // QT_CONFIG(tooltip)
        ocr->setText(QCoreApplication::translate("Ocrbar", "OCR", nullptr));
#if QT_CONFIG(tooltip)
        flipView->setToolTip(QCoreApplication::translate("Ocrbar", "Click to swap between vertical and horizontal views", nullptr));
#endif // QT_CONFIG(tooltip)
        flipView->setText(QCoreApplication::translate("Ocrbar", "Flip View", nullptr));
#if QT_CONFIG(tooltip)
        clear->setToolTip(QCoreApplication::translate("Ocrbar", "Click to clear the text", nullptr));
#endif // QT_CONFIG(tooltip)
        clear->setText(QCoreApplication::translate("Ocrbar", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        copy->setToolTip(QCoreApplication::translate("Ocrbar", "Click to copy text to the clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        copy->setText(QCoreApplication::translate("Ocrbar", "Copy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ocrbar: public Ui_Ocrbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCRBAR_H
