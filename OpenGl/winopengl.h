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
    void timerEvent(QTimerEvent *event);

private:
    float rtri;
    float rquad;
    float movT_ED;
    float movT_BC;
    float movQ_ED;
    float movQ_BC;

    QBasicTimer timer;
    int timeoutTime() { return 1000 / 40; }
  //virtual ~QWidget();
};

#endif // WINOPENGL_H
