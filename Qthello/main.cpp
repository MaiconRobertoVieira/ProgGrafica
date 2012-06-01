#include "notepad.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QtGui>
#include <QVBoxLayout>
#include "welcome_window.h"


int main(int argc, char **argv){

    QApplication app(argc, argv);

    notepad Not(&app);//constroi
    Not.show();//mostra
    Not.setarTexto("texto");

    welcome_window wwin;
    wwin.setText("OK");
    wwin.show();

    QObject::connect(&wwin,SIGNAL(clicked()),&Not, SLOT(exibirTexto()));
    QObject::connect(&wwin,SIGNAL(clicked()),&Not, SLOT(incremContador()));

    return app.exec();

}
