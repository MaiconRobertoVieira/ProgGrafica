#include "notepad.h"

QPushButton *button1;
QPushButton *button2;
QPushButton *button3;
QPushButton *button4;
QPushButton *button5;

notepad::notepad(QApplication *app)
{
    //appInt = app;

    button1 = new QPushButton("Botao1");
    button2 = new QPushButton("Botao2");
    button3 = new QPushButton("Botao3");
    button4 = new QPushButton("Botao4");
    button5 = new QPushButton("Botao5");



    textEdit = new QTextEdit();
    QObject::connect(button1,SIGNAL(clicked()),app, SLOT(quit()));
    QObject::connect(button2,SIGNAL(clicked()),app, SLOT(quit()));
    QObject::connect(button3,SIGNAL(clicked()),app, SLOT(quit()));
    QObject::connect(button4,SIGNAL(clicked()),app, SLOT(quit()));
    QObject::connect(button5,SIGNAL(clicked()),app, SLOT(quit()));


    //QHBoxLayout *layout = new QHBoxLayout;
    QGridLayout *layout = new QGridLayout;

    layout->addWidget(textEdit,1,2,Qt::AlignHCenter);

    layout->addWidget(button1,2,2,Qt::AlignLeft);
    layout->addWidget(button2,2,2,Qt::AlignRight);

    layout->addWidget(button3,3,2,Qt::AlignCenter);

    layout->addWidget(button4,4,2,Qt::AlignLeft);
    layout->addWidget(button5,4,2,Qt::AlignRight);


    window = new QWidget;
    window->setLayout(layout);

   // window2 = new QWidget;
   // window2->setLayout(layout);
}

void notepad::show(){
    window->show();
   // QObject::connect(button,SIGNAL(clicked()),appInt, SLOT(quit()));
}

void notepad::setarTexto(QString string)
{
    text = string;

}

void notepad::exibirTexto(){

    textEdit->setText(text);

}
