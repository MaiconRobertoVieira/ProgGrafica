#include <iostream>
#include <QGLWidget>
#include <QApplication>
#include "winopengl.h"

int main(int argc, char **argv){// ou(int argc, char* argv[]
    QApplication app(argc,argv);

    winopengl win;
    win.show();
    //QGLWidget win;
    //win.show();
    return app.exec();


}

