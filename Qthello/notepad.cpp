#include "notepad.h"

QPushButton *button;

notepad::notepad(QApplication *app)
{
    //appInt = app;

    button = new QPushButton("Botao");

    QTextEdit *textEdit = new QTextEdit();
    QObject::connect(button,SIGNAL(clicked()),app, SLOT(quit()));

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(textEdit);
    layout->addWidget(button);

    window = new QWidget;
    window->setLayout(layout);
}

void notepad::show(){
    window->show();
   // QObject::connect(button,SIGNAL(clicked()),appInt, SLOT(quit()));
}
