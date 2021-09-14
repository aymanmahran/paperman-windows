/********************************************************************************
** Form generated from reading UI file 'send.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEND_H
#define UI_SEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "desktopview.h"

QT_BEGIN_NAMESPACE

class Ui_send
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *from;
    QLabel *label_6;
    QListWidget *toList;
    QLabel *label_3;
    QLineEdit *subject;
    QLabel *label_4;
    QTextEdit *notes;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *itemCount;
    Desktopview *view;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *send)
    {
        if (send->objectName().isEmpty())
            send->setObjectName(QString::fromUtf8("send"));
        send->resize(567, 384);
        verticalLayout_3 = new QVBoxLayout(send);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(send);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        verticalLayout_3->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(send);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        from = new QLineEdit(send);
        from->setObjectName(QString::fromUtf8("from"));
        from->setEnabled(false);

        gridLayout->addWidget(from, 0, 1, 1, 1);

        label_6 = new QLabel(send);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        toList = new QListWidget(send);
        toList->setObjectName(QString::fromUtf8("toList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(toList->sizePolicy().hasHeightForWidth());
        toList->setSizePolicy(sizePolicy);
        toList->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(toList, 2, 1, 1, 1);

        label_3 = new QLabel(send);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        subject = new QLineEdit(send);
        subject->setObjectName(QString::fromUtf8("subject"));

        gridLayout->addWidget(subject, 3, 1, 1, 1);

        label_4 = new QLabel(send);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        notes = new QTextEdit(send);
        notes->setObjectName(QString::fromUtf8("notes"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(notes->sizePolicy().hasHeightForWidth());
        notes->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(notes, 4, 1, 1, 1);

        label_2 = new QLabel(send);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        itemCount = new QLabel(send);
        itemCount->setObjectName(QString::fromUtf8("itemCount"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(itemCount->sizePolicy().hasHeightForWidth());
        itemCount->setSizePolicy(sizePolicy2);
        itemCount->setFrameShape(QFrame::Panel);
        itemCount->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(itemCount);

        view = new Desktopview(send);
        view->setObjectName(QString::fromUtf8("view"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(200);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(view->sizePolicy().hasHeightForWidth());
        view->setSizePolicy(sizePolicy3);
        view->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(view);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(send);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(toList, subject);
        QWidget::setTabOrder(subject, notes);
        QWidget::setTabOrder(notes, buttonBox);
        QWidget::setTabOrder(buttonBox, view);
        QWidget::setTabOrder(view, from);

        retranslateUi(send);
        QObject::connect(buttonBox, SIGNAL(accepted()), send, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), send, SLOT(reject()));

        QMetaObject::connectSlotsByName(send);
    } // setupUi

    void retranslateUi(QDialog *send)
    {
        send->setWindowTitle(QCoreApplication::translate("send", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("send", "Enter the a subject and select the recipients. It will help if you enter a few notes also", nullptr));
        label->setText(QCoreApplication::translate("send", "From:", nullptr));
        label_6->setText(QCoreApplication::translate("send", "Enter recipients here, or select from list:", nullptr));
        label_3->setText(QCoreApplication::translate("send", "Subject:", nullptr));
        label_4->setText(QCoreApplication::translate("send", "Notes:", nullptr));
        label_2->setText(QCoreApplication::translate("send", "To:", nullptr));
        itemCount->setText(QCoreApplication::translate("send", "6 items to send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class send: public Ui_send {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEND_H
