/********************************************************************************
** Form generated from reading UI file 'messagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEBOX_H
#define UI_MESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_messageBox
{
public:
    QLabel *label;
    QPushButton *btOK;
    QPushButton *btCancel;

    void setupUi(QWidget *messageBox)
    {
        if (messageBox->objectName().isEmpty())
            messageBox->setObjectName(QStringLiteral("messageBox"));
        messageBox->resize(280, 130);
        messageBox->setMinimumSize(QSize(280, 130));
        messageBox->setMaximumSize(QSize(280, 130));
        QIcon icon;
        icon.addFile(QStringLiteral("icon/Warning.png"), QSize(), QIcon::Normal, QIcon::Off);
        messageBox->setWindowIcon(icon);
        label = new QLabel(messageBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 280, 91));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(280, 130));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        btOK = new QPushButton(messageBox);
        btOK->setObjectName(QStringLiteral("btOK"));
        btOK->setGeometry(QRect(40, 90, 75, 31));
        btCancel = new QPushButton(messageBox);
        btCancel->setObjectName(QStringLiteral("btCancel"));
        btCancel->setGeometry(QRect(160, 90, 75, 31));

        retranslateUi(messageBox);

        QMetaObject::connectSlotsByName(messageBox);
    } // setupUi

    void retranslateUi(QWidget *messageBox)
    {
        messageBox->setWindowTitle(QApplication::translate("messageBox", "Form", 0));
        label->setText(QApplication::translate("messageBox", "TextLabel", 0));
        btOK->setText(QApplication::translate("messageBox", "CO\314\201", 0));
        btCancel->setText(QApplication::translate("messageBox", "KH\303\224NG", 0));
    } // retranslateUi

};

namespace Ui {
    class messageBox: public Ui_messageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEBOX_H
