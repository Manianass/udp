#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QUdpSocket>
#include <QByteArray>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    auto socket = new QUdpSocket(this);
     auto sentBytes = socket->writeDatagram(QByteArray{"b"}, QHostAddress{"192.168.1.42"}, 4210);
     if (sentBytes == -1)
         ui->statusBar->showMessage("Nie udalo sie wyslac!");
     else
         ui->statusBar->showMessage("Roleta 1 zwijanie " );

}

void MainWindow::on_pushButton_2_clicked()
{
    auto socket = new QUdpSocket(this);
     auto sentBytes = socket->writeDatagram(QByteArray{"a"}, QHostAddress{"192.168.1.42"}, 4210);
     if (sentBytes == -1)
         ui->statusBar->showMessage("Nie udalo sie wyslac!");
     else
         ui->statusBar->showMessage("Roleta 1 rozwijanie");
}

void MainWindow::on_pushButton_3_clicked()// Roleta 2 Otwieranie
{
    auto socket = new QUdpSocket(this);
     auto sentBytes = socket->writeDatagram(QByteArray{"d"}, QHostAddress{"192.168.1.42"}, 4210);
     if (sentBytes == -1)
         ui->statusBar->showMessage("Nie udalo sie wyslac!");
     else
         ui->statusBar->showMessage("Roleta 2 zwijanie ");
}

void MainWindow::on_pushButton_4_clicked()// zamykanie r2
{
    auto socket = new QUdpSocket(this);
     auto sentBytes = socket->writeDatagram(QByteArray{"c"}, QHostAddress{"192.168.1.42"}, 4210);
     if (sentBytes == -1)
         ui->statusBar->showMessage("Nie udalo sie wyslac!");
     else
         ui->statusBar->showMessage("Roleta 2 rozwijanie ");
}

void MainWindow::on_pushButton_5_clicked()
{
    auto socket = new QUdpSocket(this);
     auto sentBytes = socket->writeDatagram(QByteArray{"f"}, QHostAddress{"192.168.1.42"}, 4210);
     if (sentBytes == -1)
         ui->statusBar->showMessage("Nie udalo sie wyslac!");
     else
         ui->statusBar->showMessage("Roleta 3 zwijanie ");
}

void MainWindow::on_pushButton_6_clicked()
{
    auto socket = new QUdpSocket(this);
     auto sentBytes = socket->writeDatagram(QByteArray{"e"}, QHostAddress{"192.168.1.42"}, 4210);
     if (sentBytes == -1)
        ui->statusBar->showMessage("Nie udalo sie wyslac!");
     else
        ui->statusBar->showMessage("Roleta 3 rozwijanie");
}

void MainWindow::on_pushButton_7_clicked()
{
    auto socket = new QUdpSocket(this);
     auto sentBytes = socket->writeDatagram(QByteArray{"h"}, QHostAddress{"192.168.1.42"}, 4210);
     if (sentBytes == -1)
         ui->statusBar->showMessage("Nie udalo sie wyslac!");
     else
         ui->statusBar->showMessage("Zwijanie wszystkich rolet");
}

void MainWindow::on_pushButton_8_clicked()
{
    auto socket = new QUdpSocket(this);
     auto sentBytes = socket->writeDatagram(QByteArray{"g"}, QHostAddress{"192.168.1.42"}, 4210);
     if (sentBytes == -1)
         ui->statusBar->showMessage("Nie udalo sie wyslac!");
     else
         ui->statusBar->showMessage("Zwijanie wszystkich rolet");
}
