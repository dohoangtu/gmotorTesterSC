#include "gmotortestersc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GmotorTesterSC w;
    w.showMaximized();
    
    return a.exec();
}
