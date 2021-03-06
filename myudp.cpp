#include "myudp.h"
 
MyUDP::MyUDP(QObject *parent) : 
    QObject(parent)
{
  socket = new QUdpSocket(this);
  
  //We need to bind the UDP socket to an address and a port
  socket->bind(QHostAddress::LocalHost,1234);         //ex. Address localhost, port 1234
  
  connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));
}


void MyUDP::SayHello()      //Just spit out some data
{
  QByteArray Data;
  Data.append("Hello from UDP land");
  
  socket->writeDatagram(Data,QHostAddress::LocalHost,1234);
  
  //If you want to broadcast something you send it to your broadcast address
  //ex. 192.2.1.255
}


void MyUDP::readyRead()     //Read something
{
  QByteArray Buffer;
  Buffer.resize(socket->pendingDatagramSize());
  
  QHostAddress sender;
  quint16 senderPort;
  socket->readDatagram(Buffer.data(),Buffer.size(),&sender,&senderPort);
  
  //The address will be sender.toString()
}