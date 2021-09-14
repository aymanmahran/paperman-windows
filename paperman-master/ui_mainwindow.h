/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mainwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Mainwindow
{
public:
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionFind;
    QAction *actionSelectall;
    QAction *actionByPosition;
    QAction *actionByDate;
    QAction *actionByName;
    QAction *actionAbout;
    QAction *actionSwap;
    QAction *actionPrev;
    QAction *actionNext;
    QAction *actionPprev;
    QAction *actionPnext;
    QAction *actionOptions;
    QAction *actionScango;
    QAction *actionPscan;
    QAction *actionRleft;
    QAction *actionRright;
    QAction *actionHflip;
    QAction *actionVflip;
    QAction *actionResize_all;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionClear_Selection;
    QAction *actionUndo_2;
    QAction *actionRedo_2;
    QAction *actionFind_2;
    QAction *actionSelect_All;
    QAction *actionFullScreen;
    QAction *actionTest;
    QAction *actionPreferences;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    Mainwidget *_main;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuTools;
    QMenu *menuArrange;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Mainwindow)
    {
        if (Mainwindow->objectName().isEmpty())
            Mainwindow->setObjectName(QString::fromUtf8("Mainwindow"));
        Mainwindow->resize(874, 821);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Mainwindow->sizePolicy().hasHeightForWidth());
        Mainwindow->setSizePolicy(sizePolicy);
        actionPrint = new QAction(Mainwindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/print.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon);
        actionExit = new QAction(Mainwindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionFind = new QAction(Mainwindow);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        actionSelectall = new QAction(Mainwindow);
        actionSelectall->setObjectName(QString::fromUtf8("actionSelectall"));
        actionByPosition = new QAction(Mainwindow);
        actionByPosition->setObjectName(QString::fromUtf8("actionByPosition"));
        actionByDate = new QAction(Mainwindow);
        actionByDate->setObjectName(QString::fromUtf8("actionByDate"));
        actionByName = new QAction(Mainwindow);
        actionByName->setObjectName(QString::fromUtf8("actionByName"));
        actionAbout = new QAction(Mainwindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSwap = new QAction(Mainwindow);
        actionSwap->setObjectName(QString::fromUtf8("actionSwap"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/swap.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        actionSwap->setIcon(icon1);
        actionPrev = new QAction(Mainwindow);
        actionPrev->setObjectName(QString::fromUtf8("actionPrev"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/prev.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrev->setIcon(icon2);
        actionNext = new QAction(Mainwindow);
        actionNext->setObjectName(QString::fromUtf8("actionNext"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/next.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        actionNext->setIcon(icon3);
        actionPprev = new QAction(Mainwindow);
        actionPprev->setObjectName(QString::fromUtf8("actionPprev"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/pprev.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        actionPprev->setIcon(icon4);
        actionPnext = new QAction(Mainwindow);
        actionPnext->setObjectName(QString::fromUtf8("actionPnext"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/pnext.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        actionPnext->setIcon(icon5);
        actionOptions = new QAction(Mainwindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/options.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        actionOptions->setIcon(icon6);
        actionScango = new QAction(Mainwindow);
        actionScango->setObjectName(QString::fromUtf8("actionScango"));
        actionScango->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/scan-go.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        actionScango->setIcon(icon7);
        actionPscan = new QAction(Mainwindow);
        actionPscan->setObjectName(QString::fromUtf8("actionPscan"));
        actionPscan->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/scan.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        actionPscan->setIcon(icon8);
        actionRleft = new QAction(Mainwindow);
        actionRleft->setObjectName(QString::fromUtf8("actionRleft"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/rleft.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        actionRleft->setIcon(icon9);
        actionRleft->setVisible(false);
        actionRleft->setIconVisibleInMenu(true);
        actionRright = new QAction(Mainwindow);
        actionRright->setObjectName(QString::fromUtf8("actionRright"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/rright.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        actionRright->setIcon(icon10);
        actionRright->setVisible(false);
        actionHflip = new QAction(Mainwindow);
        actionHflip->setObjectName(QString::fromUtf8("actionHflip"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/hflip.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        actionHflip->setIcon(icon11);
        actionHflip->setVisible(false);
        actionVflip = new QAction(Mainwindow);
        actionVflip->setObjectName(QString::fromUtf8("actionVflip"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/images/vflip.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        actionVflip->setIcon(icon12);
        actionVflip->setVisible(false);
        actionResize_all = new QAction(Mainwindow);
        actionResize_all->setObjectName(QString::fromUtf8("actionResize_all"));
        actionUndo = new QAction(Mainwindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(Mainwindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionClear_Selection = new QAction(Mainwindow);
        actionClear_Selection->setObjectName(QString::fromUtf8("actionClear_Selection"));
        actionUndo_2 = new QAction(Mainwindow);
        actionUndo_2->setObjectName(QString::fromUtf8("actionUndo_2"));
        actionRedo_2 = new QAction(Mainwindow);
        actionRedo_2->setObjectName(QString::fromUtf8("actionRedo_2"));
        actionFind_2 = new QAction(Mainwindow);
        actionFind_2->setObjectName(QString::fromUtf8("actionFind_2"));
        actionSelect_All = new QAction(Mainwindow);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        actionFullScreen = new QAction(Mainwindow);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setShortcutContext(Qt::ApplicationShortcut);
        actionTest = new QAction(Mainwindow);
        actionTest->setObjectName(QString::fromUtf8("actionTest"));
        actionPreferences = new QAction(Mainwindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        centralwidget = new QWidget(Mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(3);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        _main = new Mainwidget(centralwidget);
        _main->setObjectName(QString::fromUtf8("_main"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(_main->sizePolicy().hasHeightForWidth());
        _main->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 252, 248, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        _main->setPalette(palette);
        _main->setFrameShape(QFrame::StyledPanel);
        _main->setFrameShadow(QFrame::Raised);

        vboxLayout1->addWidget(_main);


        vboxLayout->addLayout(vboxLayout1);

        Mainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Mainwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 874, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuArrange = new QMenu(menuTools);
        menuArrange->setObjectName(QString::fromUtf8("menuArrange"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        Mainwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(Mainwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Mainwindow->setStatusBar(statusbar);
        toolBar = new QToolBar(Mainwindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        Mainwindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionExit);
        menuFile->addSeparator();
        menuView->addAction(actionFullScreen);
        menuTools->addAction(menuArrange->menuAction());
        menuArrange->addAction(actionByPosition);
        menuArrange->addAction(actionByDate);
        menuArrange->addAction(actionByName);
        menuArrange->addSeparator();
        menuArrange->addAction(actionResize_all);
        menuHelp->addAction(actionAbout);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionFind);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelectall);
        toolBar->addAction(actionSwap);
        toolBar->addAction(actionPrint);
        toolBar->addSeparator();
        toolBar->addAction(actionOptions);
        toolBar->addAction(actionScango);
        toolBar->addAction(actionPscan);
        toolBar->addSeparator();
        toolBar->addAction(actionRleft);
        toolBar->addAction(actionRright);
        toolBar->addAction(actionHflip);
        toolBar->addAction(actionVflip);

        retranslateUi(Mainwindow);

        QMetaObject::connectSlotsByName(Mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *Mainwindow)
    {
        Mainwindow->setWindowTitle(QCoreApplication::translate("Mainwindow", "Paper Manager", nullptr));
        actionPrint->setText(QCoreApplication::translate("Mainwindow", "Print", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint->setToolTip(QCoreApplication::translate("Mainwindow", "Print this stack", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("Mainwindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("Mainwindow", "Exit", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("Mainwindow", "Exit Paper Manager", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("Mainwindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("Mainwindow", "Find", nullptr));
#if QT_CONFIG(tooltip)
        actionFind->setToolTip(QCoreApplication::translate("Mainwindow", "Find a stack by name", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("Mainwindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectall->setText(QCoreApplication::translate("Mainwindow", "Select all", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectall->setToolTip(QCoreApplication::translate("Mainwindow", "Select all stacks", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSelectall->setShortcut(QCoreApplication::translate("Mainwindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionByPosition->setText(QCoreApplication::translate("Mainwindow", "by Position", nullptr));
#if QT_CONFIG(tooltip)
        actionByPosition->setToolTip(QCoreApplication::translate("Mainwindow", "Arrange stacks by Position", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionByPosition->setStatusTip(QCoreApplication::translate("Mainwindow", "Arrange stacks by Position", nullptr));
#endif // QT_CONFIG(statustip)
        actionByDate->setText(QCoreApplication::translate("Mainwindow", "by Date", nullptr));
#if QT_CONFIG(tooltip)
        actionByDate->setToolTip(QCoreApplication::translate("Mainwindow", "Arrange stacks by Date", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionByDate->setStatusTip(QCoreApplication::translate("Mainwindow", "Arrange stacks by Date", nullptr));
#endif // QT_CONFIG(statustip)
        actionByName->setText(QCoreApplication::translate("Mainwindow", "by Name", nullptr));
#if QT_CONFIG(tooltip)
        actionByName->setToolTip(QCoreApplication::translate("Mainwindow", "Arrange stacks by Name", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionByName->setStatusTip(QCoreApplication::translate("Mainwindow", "Arrange stacks by Name", nullptr));
#endif // QT_CONFIG(statustip)
        actionAbout->setText(QCoreApplication::translate("Mainwindow", "About", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("Mainwindow", "Provides information about Paper Manager", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSwap->setText(QCoreApplication::translate("Mainwindow", "Swap", nullptr));
#if QT_CONFIG(tooltip)
        actionSwap->setToolTip(QCoreApplication::translate("Mainwindow", "Swap between desktop and page view", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPrev->setText(QCoreApplication::translate("Mainwindow", "Prev", nullptr));
#if QT_CONFIG(tooltip)
        actionPrev->setToolTip(QCoreApplication::translate("Mainwindow", "Move to previous page", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrev->setShortcut(QCoreApplication::translate("Mainwindow", "PgUp", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNext->setText(QCoreApplication::translate("Mainwindow", "Next", nullptr));
#if QT_CONFIG(tooltip)
        actionNext->setToolTip(QCoreApplication::translate("Mainwindow", "Move to next page", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNext->setShortcut(QCoreApplication::translate("Mainwindow", "PgDown", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPprev->setText(QCoreApplication::translate("Mainwindow", "pprev", nullptr));
#if QT_CONFIG(tooltip)
        actionPprev->setToolTip(QCoreApplication::translate("Mainwindow", "Move to previous stack", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPprev->setShortcut(QCoreApplication::translate("Mainwindow", "Ctrl+PgUp", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPnext->setText(QCoreApplication::translate("Mainwindow", "pnext", nullptr));
#if QT_CONFIG(tooltip)
        actionPnext->setToolTip(QCoreApplication::translate("Mainwindow", "Move to next stack", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPnext->setShortcut(QCoreApplication::translate("Mainwindow", "Ctrl+PgDown", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOptions->setText(QCoreApplication::translate("Mainwindow", "options", nullptr));
#if QT_CONFIG(tooltip)
        actionOptions->setToolTip(QCoreApplication::translate("Mainwindow", "Change scanning options", nullptr));
#endif // QT_CONFIG(tooltip)
        actionScango->setText(QCoreApplication::translate("Mainwindow", "scango", nullptr));
#if QT_CONFIG(tooltip)
        actionScango->setToolTip(QCoreApplication::translate("Mainwindow", "Perform a scan immediately using current settings", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionScango->setShortcut(QCoreApplication::translate("Mainwindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPscan->setText(QCoreApplication::translate("Mainwindow", "pscan", nullptr));
#if QT_CONFIG(tooltip)
        actionPscan->setToolTip(QCoreApplication::translate("Mainwindow", "Bring up the scanning dialogue", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPscan->setShortcut(QCoreApplication::translate("Mainwindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRleft->setText(QCoreApplication::translate("Mainwindow", "rleft", nullptr));
#if QT_CONFIG(tooltip)
        actionRleft->setToolTip(QCoreApplication::translate("Mainwindow", "Rotate each page in the stack left", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRleft->setShortcut(QCoreApplication::translate("Mainwindow", "Alt+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRright->setText(QCoreApplication::translate("Mainwindow", "rright", nullptr));
#if QT_CONFIG(tooltip)
        actionRright->setToolTip(QCoreApplication::translate("Mainwindow", "Rotate each page in the stack right", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRright->setShortcut(QCoreApplication::translate("Mainwindow", "Alt+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHflip->setText(QCoreApplication::translate("Mainwindow", "hflip", nullptr));
#if QT_CONFIG(tooltip)
        actionHflip->setToolTip(QCoreApplication::translate("Mainwindow", "Flip each page in the stack horizontally", nullptr));
#endif // QT_CONFIG(tooltip)
        actionVflip->setText(QCoreApplication::translate("Mainwindow", "vflip", nullptr));
#if QT_CONFIG(tooltip)
        actionVflip->setToolTip(QCoreApplication::translate("Mainwindow", "Flip each page in the stack vertically", nullptr));
#endif // QT_CONFIG(tooltip)
        actionResize_all->setText(QCoreApplication::translate("Mainwindow", "Resize all", nullptr));
#if QT_CONFIG(tooltip)
        actionResize_all->setToolTip(QCoreApplication::translate("Mainwindow", "Recalculate the size of all stacks in the current view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionResize_all->setStatusTip(QCoreApplication::translate("Mainwindow", "Recalculate the size of all stacks in the current view", nullptr));
#endif // QT_CONFIG(statustip)
        actionUndo->setText(QCoreApplication::translate("Mainwindow", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        actionUndo->setToolTip(QCoreApplication::translate("Mainwindow", "Undo last operation", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRedo->setText(QCoreApplication::translate("Mainwindow", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        actionRedo->setToolTip(QCoreApplication::translate("Mainwindow", "Redo last operation", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClear_Selection->setText(QCoreApplication::translate("Mainwindow", "Clear Selection", nullptr));
        actionUndo_2->setText(QCoreApplication::translate("Mainwindow", "Undo", nullptr));
        actionRedo_2->setText(QCoreApplication::translate("Mainwindow", "Redo", nullptr));
        actionFind_2->setText(QCoreApplication::translate("Mainwindow", "Find", nullptr));
#if QT_CONFIG(shortcut)
        actionFind_2->setShortcut(QCoreApplication::translate("Mainwindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelect_All->setText(QCoreApplication::translate("Mainwindow", "Select All", nullptr));
#if QT_CONFIG(shortcut)
        actionSelect_All->setShortcut(QCoreApplication::translate("Mainwindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFullScreen->setText(QCoreApplication::translate("Mainwindow", "Full Screen", nullptr));
#if QT_CONFIG(tooltip)
        actionFullScreen->setToolTip(QCoreApplication::translate("Mainwindow", "Go into full screen mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFullScreen->setShortcut(QCoreApplication::translate("Mainwindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTest->setText(QCoreApplication::translate("Mainwindow", "Test", nullptr));
        actionPreferences->setText(QCoreApplication::translate("Mainwindow", "Preferences", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Mainwindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("Mainwindow", "View", nullptr));
        menuTools->setTitle(QCoreApplication::translate("Mainwindow", "Tools", nullptr));
#if QT_CONFIG(tooltip)
        menuArrange->setToolTip(QCoreApplication::translate("Mainwindow", "Arrange stacks in this folder", nullptr));
#endif // QT_CONFIG(tooltip)
        menuArrange->setTitle(QCoreApplication::translate("Mainwindow", "Arrange", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Mainwindow", "Help", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Mainwindow", "Edit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Mainwindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mainwindow: public Ui_Mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
