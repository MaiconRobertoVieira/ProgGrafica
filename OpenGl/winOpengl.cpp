#include "winopengl.h"
#include <GL/glu.h>

winopengl::winopengl(){
}


void winopengl::initializeGL(){

    //glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    gluOrtho2D(-1.0, 1.0,-1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}

void winopengl::resizeGL(int w, int h){

    glViewport     ( 0, 0, w, h );
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();//reset da posição da camera

    if ( h==0 )  // Calculate The Aspect Ratio Of The Window
        gluPerspective ( 80, ( float ) w, 1.0, 5000.0 );
    else
        gluPerspective ( 80, ( float ) w / ( float ) h, 1.0, 5000.0 );
    glMatrixMode   ( GL_MODELVIEW );  // Select The Model View Matrix
    glLoadIdentity ( );    // Reset The Model View Matrix

}

void winopengl::paintGL(){
    //glClear(GL_COLOR_BUFFER_BIT);// Area visivel da tela = resultado
    glClearColor(1.0f,1.0f,1.0f,0.0f);


    //Limpa a janela de visualização com a cor de fundo
    //definida previamente
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

      glLoadIdentity();									// Reset The Current Modelview Matrix


    //Altera a cor do tringulo para azul
    glColor3f(0.0f, 0.0f, 1.0f);

    //desenha o triangulo
    glTranslatef(-1.5f,0.0f,-3.0f);
        glRotatef(rtri,0.0f,1.0f,0.0f);
       // glTranslatef(1.5f,0.0f,9.0f);
    glBegin(GL_TRIANGLES);
        glVertex3f(-0.3f, -0.3f, 0.f);
        glVertex3f(0.0f, 0.3f, 0.f);
        glVertex3f(0.3f, -0.3f, 0.f);
    glEnd();

   glLoadIdentity();
    glColor3f(0.0f, 0.0f, 1.0f);

    glTranslatef(movD,movE,-6.0f);
        glRotatef(rquad,0.0f,1.0f,0.0f);

    //Desenha o quadrado
    glBegin(GL_QUADS);
        glVertex3f(-0.3f, 0.3f, 0.0f);
        glVertex3f( 0.3f, 0.3f, 0.0f);
        glVertex3f( 0.3f,-0.3f, 0.0f);
        glVertex3f(-0.3f,-0.3f, 0.0f);
    glEnd();
}
void winopengl::keyPressEvent(QKeyEvent *event){

        switch (event->key()) {

        case Qt::Key_Left:
            rtri += 1.0f;						// Increase The Rotation Variable For The Triangle ( NEW )
            rquad -= 1.0f;
            break;

        case Qt::Key_Right:
            rtri -= 1.0f;						// Increase The Rotation Variable For The Triangle ( NEW )
            rquad += 1.0f;
            break;
        case Qt::Key_E:
            movE += 1.0f;
            break;
        case Qt::Key_D:
            movD += 1.0f;
            break;
      }
        updateGL();

    }



