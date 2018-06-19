#include "mainwindow.h"
#include <QApplication>
#include "myudp.h"
//

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    QCoreApplication a(argc, argv);

 //   MyUDP server;
    MyUDP server;

    server.SayHello();

    return a.exec();
}
