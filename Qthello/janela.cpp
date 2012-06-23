#include "janela.h"
#include "notepad.h"
#include <QApplication>
#include <QFrame>


janela::janela(QWidget *parent)
{
    layout = new QGridLayout();
    quadro = new Quadro(0);
    this->resize(500,500);
    this->setMaximumSize(500,500);

    quadro->setMinimumSize(500, 500);
    quadro->setMaximumSize(500, 500);

    layout->addWidget(quadro);
    this->setLayout(layout);
    this->show();
}
