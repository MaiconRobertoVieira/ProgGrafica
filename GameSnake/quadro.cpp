#include "quadro.h"

Board::Board(QWidget *parent)
{
    quadro = 10;
    //setFrameStyle(QFrame::Raised | QFrame::StyledPanel);
    setFrameStyle(QFrame::Panel);
    setFocusPolicy(Qt::StrongFocus);


}

void Board::paintEvent(QPaintEvent *evento){

    QPainter desenho(this);

    desenho.setBrush(Qt::blue);
    desenho.drawRect(20,30,quadro,quadro);//20 X 30 é a posição e 15X15 é o tamanho do quadro

    QPainter desenho2(this);
    desenho2.setBrush(Qt::red);
    desenho2.drawRect(posX,posY,quadro,quadro);

    QFrame::paintEvent(evento);

}

void Board::keyPressEvent(QKeyEvent *evento){
        switch (evento->key()) {
        case Qt::Key_Left:
            posX = posX-10;
            break;
        case Qt::Key_Right:
            posX = posX+10;
            break;
        case Qt::Key_Down:
            posY = posY+10;
            break;
        case Qt::Key_Up:
            posY = posY-10;
            break;
        default:
            QFrame::keyPressEvent(evento);
    }
            this->update();
}

void Board::timerEvent(QTimerEvent *evento){

        this->update();
    }




