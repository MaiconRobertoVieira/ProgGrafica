#include <notepad.h>
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QtGui>
#include <QVBoxLayout>

int main(int argc, char **argv){


    QApplication app(argc, argv);

    notepad Not(&app);//constroi

    Not.show();//mostra

    return app.exec();



}
