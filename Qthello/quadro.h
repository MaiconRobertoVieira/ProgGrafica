#ifndef QUADRO_H
#define QUADRO_H
#include<QtGui>

class Quadro: public QFrame{
    Q_OBJECT

public:
    Quadro(QWidget *parent=0);

protected:

private:
    int posY;
    int posX;
};

#endif // QUADRO_H



