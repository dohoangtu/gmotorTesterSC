#ifndef MESSAGEBOX_H
#define MESSAGEBOX_H

#include <QWidget>

namespace Ui {
class messageBox;
}

class messageBox : public QWidget
{
    Q_OBJECT
    
public:
    explicit messageBox(QWidget *parent = 0);
    ~messageBox();

    void showButton();
    int btClicked;

private slots:
    void btOk_Clicked();
    void btCANCEL_Clicked();

private:
    Ui::messageBox *ui;
};

#endif // MESSAGEBOX_H
