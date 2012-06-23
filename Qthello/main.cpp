#include "notepad.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QtGui>
#include <QVBoxLayout>
#include "welcome_window.h"
#include <QSound>
#include "janela.h"


int main(int argc, char **argv){

    QApplication app(argc, argv);

    notepad Not(&app);//constroi
    Not.show();//mostra
    Not.setarTexto("texto");

    janela win;


    welcome_window wwin;
    wwin.setText("OK");
    wwin.show();
    win.show();

    QObject::connect(&wwin,SIGNAL(clicked()),&Not, SLOT(exibirTexto()));
    QObject::connect(&wwin,SIGNAL(clicked()),&Not, SLOT(incremContador()));
    QObject::connect(&wwin,SIGNAL(clicked()),&Not, SLOT(incremContador2()));
    QObject::connect(&wwin,SIGNAL(clicked()),&Not, SLOT(setBarra()));
    //QObject::connect(&wwin,SIGNAL(clicked()),&Not, SLOT(som()));


    return app.exec();

}

