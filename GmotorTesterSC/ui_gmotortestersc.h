/********************************************************************************
** Form generated from reading UI file 'gmotortestersc.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GMOTORTESTERSC_H
#define UI_GMOTORTESTERSC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GmotorTesterSC
{
public:
    QAction *actionNew;
    QAction *actionDelete;
    QAction *actionOpen;
    QAction *actionConnect;
    QAction *actionSetting;
    QAction *actionE_it;
    QAction *actionToolBar;
    QAction *actionStatus_Bar;
    QAction *actionAbout;
    QAction *actionHelp;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabControlMotor;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GmotorTesterSC)
    {
        if (GmotorTesterSC->objectName().isEmpty())
            GmotorTesterSC->setObjectName(QStringLiteral("GmotorTesterSC"));
        GmotorTesterSC->resize(791, 695);
        QIcon icon;
        icon.addFile(QStringLiteral("icon/Armor.png"), QSize(), QIcon::Normal, QIcon::Off);
        GmotorTesterSC->setWindowIcon(icon);
        actionNew = new QAction(GmotorTesterSC);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("icon/AddNew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionDelete = new QAction(GmotorTesterSC);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("icon/Delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon2);
        actionOpen = new QAction(GmotorTesterSC);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("icon/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon3);
        actionConnect = new QAction(GmotorTesterSC);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        actionConnect->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral("icon/Disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QStringLiteral("icon/Connect.png"), QSize(), QIcon::Normal, QIcon::On);
        actionConnect->setIcon(icon4);
        actionSetting = new QAction(GmotorTesterSC);
        actionSetting->setObjectName(QStringLiteral("actionSetting"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("icon/Settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetting->setIcon(icon5);
        actionE_it = new QAction(GmotorTesterSC);
        actionE_it->setObjectName(QStringLiteral("actionE_it"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("icon/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionE_it->setIcon(icon6);
        actionToolBar = new QAction(GmotorTesterSC);
        actionToolBar->setObjectName(QStringLiteral("actionToolBar"));
        actionStatus_Bar = new QAction(GmotorTesterSC);
        actionStatus_Bar->setObjectName(QStringLiteral("actionStatus_Bar"));
        actionAbout = new QAction(GmotorTesterSC);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionHelp = new QAction(GmotorTesterSC);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        centralWidget = new QWidget(GmotorTesterSC);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabControlMotor = new QTabWidget(centralWidget);
        tabControlMotor->setObjectName(QStringLiteral("tabControlMotor"));
        tabControlMotor->setMinimumSize(QSize(360, 600));
        tabControlMotor->setMaximumSize(QSize(360, 600));

        horizontalLayout->addWidget(tabControlMotor);

        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout->addWidget(treeWidget);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        GmotorTesterSC->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GmotorTesterSC);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 791, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        GmotorTesterSC->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GmotorTesterSC);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GmotorTesterSC->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GmotorTesterSC);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GmotorTesterSC->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionDelete);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionConnect);
        menuFile->addAction(actionSetting);
        menuFile->addAction(actionE_it);
        menuView->addAction(actionToolBar);
        menuView->addAction(actionStatus_Bar);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionHelp);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionDelete);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionConnect);
        mainToolBar->addAction(actionSetting);
        mainToolBar->addAction(actionE_it);

        retranslateUi(GmotorTesterSC);

        QMetaObject::connectSlotsByName(GmotorTesterSC);
    } // setupUi

    void retranslateUi(QMainWindow *GmotorTesterSC)
    {
        GmotorTesterSC->setWindowTitle(QApplication::translate("GmotorTesterSC", "GmotorTesterSC", 0));
        actionNew->setText(QApplication::translate("GmotorTesterSC", "New", 0));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("GmotorTesterSC", "<html><head/><body><p>New(Ctr+N)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionNew->setShortcut(QApplication::translate("GmotorTesterSC", "Ctrl+N", 0));
        actionDelete->setText(QApplication::translate("GmotorTesterSC", "Delete", 0));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("GmotorTesterSC", "<html><head/><body><p>Delete(Ctr+D)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionDelete->setShortcut(QApplication::translate("GmotorTesterSC", "Ctrl+D", 0));
        actionOpen->setText(QApplication::translate("GmotorTesterSC", "Open", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("GmotorTesterSC", "<html><head/><body><p>Open(Ctr+O)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("GmotorTesterSC", "Ctrl+O", 0));
        actionConnect->setText(QApplication::translate("GmotorTesterSC", "Connect", 0));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("GmotorTesterSC", "<html><head/><body><p>Connect(Ctr+C)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionConnect->setShortcut(QApplication::translate("GmotorTesterSC", "Ctrl+C", 0));
        actionSetting->setText(QApplication::translate("GmotorTesterSC", "Setting", 0));
#ifndef QT_NO_TOOLTIP
        actionSetting->setToolTip(QApplication::translate("GmotorTesterSC", "<html><head/><body><p>Setting(Ctr+S)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionSetting->setShortcut(QApplication::translate("GmotorTesterSC", "Ctrl+S", 0));
        actionE_it->setText(QApplication::translate("GmotorTesterSC", "Exit", 0));
#ifndef QT_NO_TOOLTIP
        actionE_it->setToolTip(QApplication::translate("GmotorTesterSC", "<html><head/><body><p>Exit(Ctr+E)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionE_it->setShortcut(QApplication::translate("GmotorTesterSC", "Ctrl+E", 0));
        actionToolBar->setText(QApplication::translate("GmotorTesterSC", "ToolBar", 0));
        actionStatus_Bar->setText(QApplication::translate("GmotorTesterSC", "Status Bar", 0));
        actionAbout->setText(QApplication::translate("GmotorTesterSC", "About", 0));
        actionHelp->setText(QApplication::translate("GmotorTesterSC", "Help", 0));
        menuFile->setTitle(QApplication::translate("GmotorTesterSC", "File", 0));
        menuView->setTitle(QApplication::translate("GmotorTesterSC", "View", 0));
        menuHelp->setTitle(QApplication::translate("GmotorTesterSC", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class GmotorTesterSC: public Ui_GmotorTesterSC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GMOTORTESTERSC_H
