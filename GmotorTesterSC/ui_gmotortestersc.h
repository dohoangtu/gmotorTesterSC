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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
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
    QAction *actionLed;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabControlMotor;
    QTableWidget *tableMotor;
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
        GmotorTesterSC->resize(1259, 737);
        GmotorTesterSC->setMinimumSize(QSize(1259, 737));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icon/Armor.png"), QSize(), QIcon::Normal, QIcon::Off);
        GmotorTesterSC->setWindowIcon(icon);
        actionNew = new QAction(GmotorTesterSC);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/icon/AddNew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionDelete = new QAction(GmotorTesterSC);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/icon/Delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon2);
        actionOpen = new QAction(GmotorTesterSC);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/icon/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon3);
        actionConnect = new QAction(GmotorTesterSC);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        actionConnect->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/icon/Disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QStringLiteral(":/icon/icon/Connect.png"), QSize(), QIcon::Normal, QIcon::On);
        actionConnect->setIcon(icon4);
        actionSetting = new QAction(GmotorTesterSC);
        actionSetting->setObjectName(QStringLiteral("actionSetting"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/icon/Settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetting->setIcon(icon5);
        actionE_it = new QAction(GmotorTesterSC);
        actionE_it->setObjectName(QStringLiteral("actionE_it"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/icon/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionE_it->setIcon(icon6);
        actionToolBar = new QAction(GmotorTesterSC);
        actionToolBar->setObjectName(QStringLiteral("actionToolBar"));
        actionStatus_Bar = new QAction(GmotorTesterSC);
        actionStatus_Bar->setObjectName(QStringLiteral("actionStatus_Bar"));
        actionAbout = new QAction(GmotorTesterSC);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionHelp = new QAction(GmotorTesterSC);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionLed = new QAction(GmotorTesterSC);
        actionLed->setObjectName(QStringLiteral("actionLed"));
        actionLed->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/icon/led_connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QStringLiteral(":/icon/icon/led_disconnect.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLed->setIcon(icon7);
        centralWidget = new QWidget(GmotorTesterSC);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabControlMotor = new QTabWidget(centralWidget);
        tabControlMotor->setObjectName(QStringLiteral("tabControlMotor"));
        tabControlMotor->setMinimumSize(QSize(0, 0));
        tabControlMotor->setMaximumSize(QSize(5000, 500));

        verticalLayout->addWidget(tabControlMotor);

        tableMotor = new QTableWidget(centralWidget);
        if (tableMotor->columnCount() < 7)
            tableMotor->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableMotor->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableMotor->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableMotor->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableMotor->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableMotor->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableMotor->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableMotor->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableMotor->rowCount() < 10)
            tableMotor->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableMotor->setItem(0, 6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableMotor->setItem(1, 6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableMotor->setItem(2, 6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableMotor->setItem(3, 6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableMotor->setItem(4, 6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableMotor->setItem(5, 6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableMotor->setItem(6, 6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableMotor->setItem(7, 6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableMotor->setItem(8, 6, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableMotor->setItem(9, 6, __qtablewidgetitem16);
        tableMotor->setObjectName(QStringLiteral("tableMotor"));
        tableMotor->setMinimumSize(QSize(0, 0));
        tableMotor->setMaximumSize(QSize(16777215, 300));
        tableMotor->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableMotor->setRowCount(10);
        tableMotor->setColumnCount(7);
        tableMotor->horizontalHeader()->setCascadingSectionResizes(false);
        tableMotor->horizontalHeader()->setDefaultSectionSize(120);
        tableMotor->horizontalHeader()->setStretchLastSection(true);
        tableMotor->verticalHeader()->setDefaultSectionSize(20);
        tableMotor->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tableMotor);

        GmotorTesterSC->setCentralWidget(centralWidget);
        tableMotor->raise();
        tabControlMotor->raise();
        menuBar = new QMenuBar(GmotorTesterSC);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1259, 21));
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
        mainToolBar->addAction(actionLed);

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
        actionLed->setText(QApplication::translate("GmotorTesterSC", "Led", 0));
#ifndef QT_NO_TOOLTIP
        actionLed->setToolTip(QApplication::translate("GmotorTesterSC", "<html><head/><body><p>LED</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem = tableMotor->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GmotorTesterSC", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableMotor->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GmotorTesterSC", "Status", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableMotor->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GmotorTesterSC", "Start Time", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableMotor->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("GmotorTesterSC", "Stop Time", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableMotor->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("GmotorTesterSC", "Remaining Time", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableMotor->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("GmotorTesterSC", "Run time", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableMotor->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("GmotorTesterSC", "temperature", 0));

        const bool __sortingEnabled = tableMotor->isSortingEnabled();
        tableMotor->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem7 = tableMotor->item(0, 6);
        ___qtablewidgetitem7->setText(QApplication::translate("GmotorTesterSC", "0", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableMotor->item(1, 6);
        ___qtablewidgetitem8->setText(QApplication::translate("GmotorTesterSC", "0", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableMotor->item(2, 6);
        ___qtablewidgetitem9->setText(QApplication::translate("GmotorTesterSC", "0", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableMotor->item(3, 6);
        ___qtablewidgetitem10->setText(QApplication::translate("GmotorTesterSC", "0", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableMotor->item(4, 6);
        ___qtablewidgetitem11->setText(QApplication::translate("GmotorTesterSC", "0", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableMotor->item(5, 6);
        ___qtablewidgetitem12->setText(QApplication::translate("GmotorTesterSC", "0", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableMotor->item(6, 6);
        ___qtablewidgetitem13->setText(QApplication::translate("GmotorTesterSC", "0", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableMotor->item(7, 6);
        ___qtablewidgetitem14->setText(QApplication::translate("GmotorTesterSC", "0", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableMotor->item(8, 6);
        ___qtablewidgetitem15->setText(QApplication::translate("GmotorTesterSC", "0", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableMotor->item(9, 6);
        ___qtablewidgetitem16->setText(QApplication::translate("GmotorTesterSC", "0", 0));
        tableMotor->setSortingEnabled(__sortingEnabled);

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
