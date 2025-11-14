#include "Splash.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Splash s;
    s.show();
    return a.exec();
}
