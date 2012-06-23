#include "notepad.h"


QPushButton *button1;
QPushButton *button2;
QPushButton *button3;
QPushButton *button4;
QPushButton *button5;
QLCDNumber  *lcd;
QLCDNumber  *lcd2;
QTimer *timer;
QFile *file;
QProgressBar *bar;
//QSound *som;
QFrame *frame;



notepad::notepad(QApplication *app)
{
    //appInt = app;


    button1 = new QPushButton("Botao1");
    button2 = new QPushButton("Botao2");
    button3 = new QPushButton("Botao3");
    button4 = new QPushButton("Botao4");
    button5 = new QPushButton("Botao5");

    lcd = new QLCDNumber();
    lcd2 = new QLCDNumber();
    timer = new QTimer(this);
    file = new QFile;
    bar = new QProgressBar;
    //som = new QSound();
    frame = new QFrame();

    if((lcd ==NULL) || (lcd2 ==NULL) || (timer == NULL) || (file == NULL)){
        //Imprimir mensagem de erro de Alocação//
}

    connect(timer, SIGNAL(timeout()),this, SLOT(incremContador2()));
    connect(timer, SIGNAL(timeout()), this, SLOT(setBarra()));
    timer->start(1000);
    file->setFileName("C:/teste/Texto.txt");
    //som->setsom("mysounds/bells.wav");

    frame->width();
    bar->setMinimum(0);
    bar->setMaximum(60);


    cont = 0;
    cont2 = 0;

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
    layout->addWidget(lcd,5,2,Qt::AlignCenter);
    layout->addWidget(lcd2,6,2,Qt::AlignCenter);
    layout->addWidget(bar,7,2,Qt::AlignCenter);
    layout->addWidget(frame,8,2,Qt::AlignCenter);

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
    lcd->display(cont);
    //bar->(cont);

    file->open(QIODevice::ReadOnly | QIODevice::Text);
    text=file->readAll();
    file->close();

   }

void notepad::incremContador(){
    cont++;
}

void notepad::incremContador2(){
    lcd2->display(cont2);
    //lcd2->display(reset(cont2));
    cont2++;
}

void notepad::setBarra(){

        bar->setValue(cont2);
        if(cont2 == 10){
        bar->reset();
        som();
}
}
        void notepad::som(){
            QSound som ("c:\\chimes.waw");
            som.play();
        }






//QFRAME
//QkeyEvent
//QSOund
//QImage









