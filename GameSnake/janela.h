#ifndef JANELA_H
#define JANELA_H

#include "quadro.h"


class window:public QWidget
{
    Q_OBJECT
public:
    window(QWidget *parent=0);
    Board *quadro;
    QGridLayout *layout;

};

#endif // JANELA_H
