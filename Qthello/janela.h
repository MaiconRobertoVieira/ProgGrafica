#ifndef JANELA_H
#define JANELA_H

#include <QWidget>
#include <QFrame>
#include <QSize>
#include <QGridLayout>
#include <QtGui>
#include "quadro.h"

class janela: public QWidget
{
       Q_OBJECT

public:
    janela(QWidget *parent=0);
    Quadro *quadro;
    QGridLayout *layout;

    int altJanela;
    int larJanela;
    int altBorda;
    int larBorda;
};

#endif // JANELA_H

