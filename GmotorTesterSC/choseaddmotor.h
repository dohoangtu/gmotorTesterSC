#ifndef CHOSEADDMOTOR_H
#define CHOSEADDMOTOR_H

#include <QWidget>
#include <QEvent>

namespace Ui {
class choseAddMotor;
}

class choseAddMotor : public QWidget
{
    Q_OBJECT
    
public:
    explicit choseAddMotor(QWidget *parent = 0);
    ~choseAddMotor();
    int indexMotorAddTab;

signals:
    void buttonOK_ChoseClicked();
    void buttonCANCEL_ChoseClicked();
    void closeEvent(QCloseEvent *);

private slots:
    void on_btOK_clicked();
    void btCancel_Clicked();
    void closeForm();

private:
    Ui::choseAddMotor *ui;
};

#endif // CHOSEADDMOTOR_H
