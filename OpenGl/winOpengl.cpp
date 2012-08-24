#include "winopengl.h"
#include <GL/glu.h>

winopengl::winopengl(){
   timer.start(timeoutTime(),this);

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
    glTranslatef(movT_ED,movT_BC,-3.0f);
        glRotatef(rtri,0.0f,1.0f,0.0f);
       // glTranslatef(1.5f,0.0f,9.0f);
    glBegin(GL_TRIANGLES);
//        glVertex3f(-0.3f, -0.3f, 0.f);// DESENHA UM TRINGULO 2D SIMPLES
//        glVertex3f(0.0f, 0.3f, 0.f);// DESENHA UM TRINGULO 2D SIPLES
//        glVertex3f(0.3f, -0.3f, 0.f);// DESENHA UM TRINGULO 2D SIMPLES
    glColor3f(1.0f,0.0f,0.0f);			// Red
    glVertex3f( 0.0f, 1.0f, 0.0f);			// Top Of Triangle (Front)
    glColor3f(0.0f,1.0f,0.0f);			// Green
    glVertex3f(-1.0f,-1.0f, 1.0f);			// Left Of Triangle (Front)
    glColor3f(0.0f,0.0f,1.0f);			// Blue
    glVertex3f( 1.0f,-1.0f, 1.0f);			// Right Of Triangle (Front)
    glColor3f(1.0f,0.0f,0.0f);			// Red
    glVertex3f( 0.0f, 1.0f, 0.0f);			// Top Of Triangle (Right)
    glColor3f(0.0f,0.0f,1.0f);			// Blue
    glVertex3f( 1.0f,-1.0f, 1.0f);			// Left Of Triangle (Right)
    glColor3f(0.0f,1.0f,0.0f);			// Green
    glVertex3f( 1.0f,-1.0f, -1.0f);			// Right Of Triangle (Right)
    glColor3f(1.0f,0.0f,0.0f);			// Red
    glVertex3f( 0.0f, 1.0f, 0.0f);			// Top Of Triangle (Back)
    glColor3f(0.0f,1.0f,0.0f);			// Green
    glVertex3f( 1.0f,-1.0f, -1.0f);			// Left Of Triangle (Back)
    glColor3f(0.0f,0.0f,1.0f);			// Blue
    glVertex3f(-1.0f,-1.0f, -1.0f);			// Right Of Triangle (Back)
    glColor3f(1.0f,0.0f,0.0f);			// Red
    glVertex3f( 0.0f, 1.0f, 0.0f);			// Top Of Triangle (Left)
    glColor3f(0.0f,0.0f,1.0f);			// Blue
    glVertex3f(-1.0f,-1.0f,-1.0f);			// Left Of Triangle (Left)
    glColor3f(0.0f,1.0f,0.0f);			// Green
    glVertex3f(-1.0f,-1.0f, 1.0f);
    glEnd();

   glLoadIdentity();
    glColor3f(0.0f, 0.0f, 1.0f);

    glTranslatef(movQ_ED,movQ_BC,-6.0f);
        glRotatef(rquad,0.0f,1.0f,0.0f);

    //Desenha o quadrado
    glBegin(GL_QUADS);
//        glVertex3f(-0.3f, 0.3f, 0.0f);//  QUADRADO 2D SIMPLES
//        glVertex3f( 0.3f, 0.3f, 0.0f); // QUADRADO 2D SIMPLES
//        glVertex3f( 0.3f,-0.3f, 0.0f); // QUADRADO 2D SIMPLES
//        glVertex3f(-0.3f,-0.3f, 0.0f); // QUADRADO 2D SIMPLES
    glColor3f(0.0f,1.0f,0.0f);			// Set The Color To Blue
    glVertex3f( 1.0f, 1.0f,-1.0f);			// Top Right Of The Quad (Top)
    glVertex3f(-1.0f, 1.0f,-1.0f);			// Top Left Of The Quad (Top)
    glVertex3f(-1.0f, 1.0f, 1.0f);			// Bottom Left Of The Quad (Top)
    glVertex3f( 1.0f, 1.0f, 1.0f);			// Bottom Right Of The Quad (Top)
    glColor3f(1.0f,0.5f,0.0f);			// Set The Color To Orange
    glVertex3f( 1.0f,-1.0f, 1.0f);			// Top Right Of The Quad (Bottom)
    glVertex3f(-1.0f,-1.0f, 1.0f);			// Top Left Of The Quad (Bottom)
    glVertex3f(-1.0f,-1.0f,-1.0f);			// Bottom Left Of The Quad (Bottom)
    glVertex3f( 1.0f,-1.0f,-1.0f);			// Bottom Right Of The Quad (Bottom)
    glColor3f(1.0f,0.0f,0.0f);			// Set The Color To Red
    glVertex3f( 1.0f, 1.0f, 1.0f);			// Top Right Of The Quad (Front)
    glVertex3f(-1.0f, 1.0f, 1.0f);			// Top Left Of The Quad (Front)
    glVertex3f(-1.0f,-1.0f, 1.0f);			// Bottom Left Of The Quad (Front)
    glVertex3f( 1.0f,-1.0f, 1.0f);			// Bottom Right Of The Quad (Front)
    glColor3f(1.0f,1.0f,0.0f);			// Set The Color To Yellow
    glVertex3f( 1.0f,-1.0f,-1.0f);			// Bottom Left Of The Quad (Back)
    glVertex3f(-1.0f,-1.0f,-1.0f);			// Bottom Right Of The Quad (Back)
    glVertex3f(-1.0f, 1.0f,-1.0f);			// Top Right Of The Quad (Back)
    glVertex3f( 1.0f, 1.0f,-1.0f);			// Top Left Of The Quad (Back)
    glColor3f(0.0f,0.0f,1.0f);			// Set The Color To Blue
    glVertex3f(-1.0f, 1.0f, 1.0f);			// Top Right Of The Quad (Left)
    glVertex3f(-1.0f, 1.0f,-1.0f);			// Top Left Of The Quad (Left)
    glVertex3f(-1.0f,-1.0f,-1.0f);			// Bottom Left Of The Quad (Left)
    glVertex3f(-1.0f,-1.0f, 1.0f);			// Bottom Right Of The Quad (Left)
    glColor3f(1.0f,0.0f,1.0f);			// Set The Color To Violet
    glVertex3f( 1.0f, 1.0f,-1.0f);			// Top Right Of The Quad (Right)
    glVertex3f( 1.0f, 1.0f, 1.0f);			// Top Left Of The Quad (Right)
    glVertex3f( 1.0f,-1.0f, 1.0f);			// Bottom Left Of The Quad (Right)
    glVertex3f( 1.0f,-1.0f,-1.0f);			// Bottom Right Of The Quad (Right)
    glEnd();
}
void winopengl::keyPressEvent(QKeyEvent *event){

        switch (event->key()) {
//////Movimenta o Triangulo no eixo\\\\\\\\\\\\\\\\\\\\\\\\\\\

        case Qt::Key_E:
            rtri += 1.0f;
            break;

        case Qt::Key_Q:
           rtri -= 1.0f;
            break;

//////Movimenta o Tringulo para os Lados////////////////////////
        case Qt::Key_A:
            movT_ED -= 1.0f;
            break;
        case Qt::Key_S:
            movT_BC -= 1.0f;
            break;
        case Qt::Key_D:
            movT_ED += 1.0f;
            break;
        case Qt::Key_W:
            movT_BC += 1.0f;
            break;
//////Movimenta o Quadrado no eixo\\\\\\\\\\\\\\\\\\\\\\\\\\\

        case Qt::Key_O:
            rquad += 1.0f;
            break;

        case Qt::Key_U:
           rquad -= 1.0f;
            break;

//////Movimenta o Tringulo para os Lados////////////////////////
        case Qt::Key_J:
            movQ_ED -= 1.0f;
            break;
        case Qt::Key_K:
            movQ_BC -= 1.0f;
            break;
        case Qt::Key_L:
            movQ_ED += 1.0f;
            break;
        case Qt::Key_I:
            movQ_BC += 1.0f;
            break;
        }
        updateGL();

    }

void winopengl::timerEvent(QTimerEvent *event){

    rtri -= 0.5f;
    updateGL();
    rquad += 0.5f;
    updateGL();
}

//30 quadros por segundo 33.33 = resposta

