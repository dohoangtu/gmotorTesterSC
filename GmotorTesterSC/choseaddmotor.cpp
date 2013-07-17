#include "choseaddmotor.h"
#include "ui_choseaddmotor.h"

choseAddMotor::choseAddMotor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::choseAddMotor)
{
    ui->setupUi(this);

    for(int i = 1; i < 11; i++){
        ui->cbMotor->addItem(tr("Motor %1").arg(i));
    }

    connect(ui->btCancel,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->btOK,SIGNAL(clicked()),this,SLOT(on_btOK_clicked()));
//    connect(ui->btCancel,SIGNAL(clicked()),this,SLOT(btCancel_Clicked()));
    connect(this,SIGNAL(closeEvent(QCloseEvent*)),this,SLOT(closeForm()));

}

choseAddMotor::~choseAddMotor()
{
    delete ui;
}

void choseAddMotor::on_btOK_clicked()
{
    indexMotorAddTab = ui->cbMotor->currentIndex() + 1;
    close();
    emit buttonOK_ChoseClicked();
}

void choseAddMotor::btCancel_Clicked()
{
    emit buttonCANCEL_ChoseClicked();
}

void choseAddMotor::closeForm()
{
    emit buttonCANCEL_ChoseClicked();
}
