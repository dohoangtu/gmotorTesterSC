/********************************************************************************
** Form generated from reading UI file 'choseaddmotor.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOSEADDMOTOR_H
#define UI_CHOSEADDMOTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choseAddMotor
{
public:
    QGridLayout *gridLayout;
    QLabel *lbMotor;
    QComboBox *cbMotor;
    QHBoxLayout *horizontalLayout;
    QPushButton *btOK;
    QPushButton *btCancel;

    void setupUi(QWidget *choseAddMotor)
    {
        if (choseAddMotor->objectName().isEmpty())
            choseAddMotor->setObjectName(QStringLiteral("choseAddMotor"));
        choseAddMotor->resize(176, 86);
        choseAddMotor->setMinimumSize(QSize(176, 86));
        choseAddMotor->setMaximumSize(QSize(176, 86));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icon/AddNew.png"), QSize(), QIcon::Normal, QIcon::Off);
        choseAddMotor->setWindowIcon(icon);
        gridLayout = new QGridLayout(choseAddMotor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lbMotor = new QLabel(choseAddMotor);
        lbMotor->setObjectName(QStringLiteral("lbMotor"));
        QFont font;
        font.setPointSize(14);
        lbMotor->setFont(font);

        gridLayout->addWidget(lbMotor, 0, 0, 1, 1);

        cbMotor = new QComboBox(choseAddMotor);
        cbMotor->setObjectName(QStringLiteral("cbMotor"));

        gridLayout->addWidget(cbMotor, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btOK = new QPushButton(choseAddMotor);
        btOK->setObjectName(QStringLiteral("btOK"));

        horizontalLayout->addWidget(btOK);

        btCancel = new QPushButton(choseAddMotor);
        btCancel->setObjectName(QStringLiteral("btCancel"));

        horizontalLayout->addWidget(btCancel);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(choseAddMotor);

        QMetaObject::connectSlotsByName(choseAddMotor);
    } // setupUi

    void retranslateUi(QWidget *choseAddMotor)
    {
        choseAddMotor->setWindowTitle(QApplication::translate("choseAddMotor", "Chose Motor", 0));
        lbMotor->setText(QApplication::translate("choseAddMotor", "Motor:", 0));
        btOK->setText(QApplication::translate("choseAddMotor", "OK", 0));
        btCancel->setText(QApplication::translate("choseAddMotor", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class choseAddMotor: public Ui_choseAddMotor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOSEADDMOTOR_H
