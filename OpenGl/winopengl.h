#ifndef WINOPENGL_H
#define WINOPENGL_H
#include <QGLWidget>
#include <QtGui>

class winopengl:public QGLWidget
{
public:
    winopengl();
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
    void keyPressEvent(QKeyEvent *event);
private:
    float rtri;
    float rquad;
    float movT_ED;
    float movT_BC;

    float movQ_ED;
    float movQ_BC;

  //virtual ~QWidget();
};

#endif // WINOPENGL_H
