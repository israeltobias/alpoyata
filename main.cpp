#include "alpoyata.h"
#include <QApplication>
#include <QDebug>
#include <QtGlobal>
#include <QMessageBox>
#include <QtNetwork/QNetworkConfigurationManager>
#include <QtNetwork/QNetworkConfiguration>

int main(int argc, char *argv[])
{
    #ifdef Q_OS_WIN
        QApplication a(argc, argv);
        alpoyata w;
        w.show();

        return a.exec();
    #endif

    #ifdef Q_OS_UNIX
        QApplication a(argc, argv);
        alpoyata w;
        w.show();
        return a.exec();
     #endif
}
