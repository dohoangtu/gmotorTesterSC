#include "choseaddmotor.h"
#include "ui_choseaddmotor.h"
#include <QDebug>

choseAddMotor::choseAddMotor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::choseAddMotor)
{
    ui->setupUi(this);

    for(int i = 0; i < 10; i++){
        listMotor motor;
        motor.Name = tr("Motor %1").arg(i+1);
        motor.index = i + 1;
        list.append(motor);
        ui->cbMotor->addItem(motor.Name);
    }
   updateListMotor(list.size());


    connect(ui->btCancel,SIGNAL(clicked()),this,SLOT(close()));
    connect(this,SIGNAL(closeEvent(QCloseEvent*)),this,SLOT(closeForm()));
    connect(this,SIGNAL(showEvent(QShowEvent*)),this,SLOT(loadForm()));

}

choseAddMotor::~choseAddMotor()
{
    delete ui;
}

void choseAddMotor::on_btOK_clicked()
{
    qDebug()<<"button Ok chose clicked";
    listMotor motor = list.at(ui->cbMotor->currentIndex());
    indexMotorAddTab = motor.index;
    list.removeAt(ui->cbMotor->currentIndex());
    updateListMotor(list.size());
    emit buttonOK_ChoseClicked();
    this->close();
}

void choseAddMotor::btCancel_Clicked()
{
    emit buttonCANCEL_ChoseClicked();
}

void choseAddMotor::closeForm()
{
    qDebug()<<"close chose";
    emit buttonCANCEL_ChoseClicked();
}

void choseAddMotor::loadForm()
{
    updateListMotor(list.size());
}

void choseAddMotor::updateListMotor(int size)
{
    ui->cbMotor->clear();
    for(int i = 0 ; i < size; i++){
        listMotor  motor = list.at(i);
        ui->cbMotor->addItem(motor.Name);
    }
}
