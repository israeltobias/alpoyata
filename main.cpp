#include "alpoyata.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    alpoyata w;
    w.show();

    return a.exec();
}
