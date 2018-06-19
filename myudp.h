//Base class QObject

#include <QUdpSocket>
 
class MyUDP : public QObject
{
  Q_OBJECT
 
  public:
      explicit MyUDP(QObject *parent = 0);

      void SayHello();

  private:
      QUdpSocket *socket;
 
  signals:
 
  public slots:
      void readyRead();
 
};