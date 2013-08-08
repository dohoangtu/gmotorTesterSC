#ifndef CHOSEADDMOTOR_H
#define CHOSEADDMOTOR_H

#include <QWidget>
#include <QEvent>
#include <QList>
#include <QShowEvent>

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

    struct listMotor{
        QString Name;
        int index;
    };
    QList<listMotor> list;

signals:
    void buttonOK_ChoseClicked();
    void buttonCANCEL_ChoseClicked();
    void closeEvent(QCloseEvent *);
    void showEvent(QShowEvent *);

private slots:
    void on_btOK_clicked();
    void btCancel_Clicked();
    void closeForm();
    void loadForm();

private:
    Ui::choseAddMotor *ui;
    int arrayIndexSlected[10];

    void updateListMotor(int size);
};

#endif // CHOSEADDMOTOR_H
