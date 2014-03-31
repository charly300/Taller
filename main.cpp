#include <QApplication>
#include "ui/login/dialoglogin.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DialogLogin d;
    d.show();

    return a.exec();
}
