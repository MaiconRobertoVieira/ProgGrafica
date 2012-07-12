#ifndef QUADRO_H
#define QUADRO_H

#include<QtGui>

class Board : public QFrame
{
    Q_OBJECT
public:
    Board(QWidget *parent=0);
protected:
    void paintEvent(QPaintEvent *evento);
    void keyPressEvent(QKeyEvent *evento);
    void timerEvent(QTimerEvent *evento);

private:    
    int direcao;

    int altura;
    int largura;
    int posX;
    int posY;
    int quadro;

};

#endif // QUADRO_H

//void move(int posX, int posY);
//void desenha(QPainter &painters, int x, int y);
