#include "messagebox.h"
#include "ui_messagebox.h"

messageBox::messageBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::messageBox)
{
    ui->setupUi(this);

    connect(ui->btCancel,SIGNAL(clicked()),this,SLOT(btCANCEL_Clicked()));
    connect(ui->btOK,SIGNAL(clicked()),this,SLOT(btOk_Clicked()));
}

messageBox::~messageBox()
{
    delete ui;
}

void messageBox::showButton()
{
    this->show();

}

void messageBox::btOk_Clicked()
{
    btClicked = 1;
}

void messageBox::btCANCEL_Clicked()
{
    btClicked = 2;
}
