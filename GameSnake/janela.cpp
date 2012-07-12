#include "janela.h"
#include "quadro.h"

QProgressBar *bar;
QPushButton *btStart;
QPushButton *btPause;
QPushButton *btReset;

window::window(QWidget *parent)
{

    layout = new QGridLayout();

    quadro = new Board(0);
    bar = new QProgressBar;
    btStart = new QPushButton("START");
    btPause = new QPushButton("PAUSE");
    btReset = new QPushButton("RESET");

    this->resize(500,500);
    this->setMaximumSize(500,500);

 //  quadro->resize(200,200);
   quadro->setMinimumSize(500,500);
   quadro->setMaximumSize(500,500);


   bar->setMinimum(0);
   bar->setMaximum(100);



    layout->addWidget(quadro,1,1,Qt::AlignCenter);
    layout->addWidget(bar,2,1,Qt::AlignCenter);
    layout->addWidget(btStart,3,1,Qt::AlignCenter);
    layout->addWidget(btPause,4,1,Qt::AlignCenter);
    layout->addWidget(btReset,5,1,Qt::AlignCenter);

    this->setLayout(layout);
    this->show();

}

void desEvent(){

}

void teclaPress(){

}
