/********************************************************************************
** Form generated from reading UI file 'pageattr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEATTR_H
#define UI_PAGEATTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Pageattr
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *errorMsg;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *author;
    QLabel *label_2;
    QLineEdit *filename;
    QLabel *label_3;
    QLineEdit *title;
    QLabel *label_4;
    QLineEdit *keywords;
    QLabel *label_5;
    QTextEdit *notes;

    void setupUi(QFrame *Pageattr)
    {
        if (Pageattr->objectName().isEmpty())
            Pageattr->setObjectName(QString::fromUtf8("Pageattr"));
        Pageattr->resize(511, 518);
        Pageattr->setFrameShape(QFrame::StyledPanel);
        Pageattr->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(Pageattr);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        errorMsg = new QLabel(Pageattr);
        errorMsg->setObjectName(QString::fromUtf8("errorMsg"));
        errorMsg->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(errorMsg->sizePolicy().hasHeightForWidth());
        errorMsg->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(247, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(159, 158, 158, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        errorMsg->setPalette(palette);
        errorMsg->setWordWrap(true);
        errorMsg->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        vboxLayout->addWidget(errorMsg);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Pageattr);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        author = new QLineEdit(Pageattr);
        author->setObjectName(QString::fromUtf8("author"));

        gridLayout->addWidget(author, 1, 1, 1, 1);

        label_2 = new QLabel(Pageattr);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        filename = new QLineEdit(Pageattr);
        filename->setObjectName(QString::fromUtf8("filename"));
        filename->setReadOnly(true);

        gridLayout->addWidget(filename, 2, 1, 1, 1);

        label_3 = new QLabel(Pageattr);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        title = new QLineEdit(Pageattr);
        title->setObjectName(QString::fromUtf8("title"));

        gridLayout->addWidget(title, 3, 1, 1, 1);

        label_4 = new QLabel(Pageattr);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        keywords = new QLineEdit(Pageattr);
        keywords->setObjectName(QString::fromUtf8("keywords"));

        gridLayout->addWidget(keywords, 4, 1, 1, 1);

        label_5 = new QLabel(Pageattr);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        notes = new QTextEdit(Pageattr);
        notes->setObjectName(QString::fromUtf8("notes"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(notes->sizePolicy().hasHeightForWidth());
        notes->setSizePolicy(sizePolicy1);
        notes->setAcceptRichText(false);

        gridLayout->addWidget(notes, 5, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);


        retranslateUi(Pageattr);

        QMetaObject::connectSlotsByName(Pageattr);
    } // setupUi

    void retranslateUi(QFrame *Pageattr)
    {
        Pageattr->setWindowTitle(QCoreApplication::translate("Pageattr", "Frame", nullptr));
        errorMsg->setText(QCoreApplication::translate("Pageattr", "Cannot load annotations: Exif tool error: Have you installed libimage-exiftool-perl?", nullptr));
        label->setText(QCoreApplication::translate("Pageattr", "Author", nullptr));
        label_2->setText(QCoreApplication::translate("Pageattr", "Filename", nullptr));
        label_3->setText(QCoreApplication::translate("Pageattr", "Title", nullptr));
        label_4->setText(QCoreApplication::translate("Pageattr", "Keywords", nullptr));
        label_5->setText(QCoreApplication::translate("Pageattr", "Notes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pageattr: public Ui_Pageattr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEATTR_H
