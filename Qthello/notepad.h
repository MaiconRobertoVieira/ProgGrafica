#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QtGui>
#include <QVBoxLayout>

class notepad{

private:
    QWidget *window;
    QPushButton *button;
    QApplication *appInt;

public:



    notepad(QApplication *app){
        appInt = app;

        button = new QPushButton("Botao");

        QTextEdit *textEdit = new QTextEdit();

        QHBoxLayout *layout = new QHBoxLayout;
        layout->addWidget(textEdit);
        layout->addWidget(button);

        window = new QWidget;
        window->setLayout(layout);

}

        void show(){
            window->show();

       QObject::connect(button,SIGNAL(clicked()),appInt, SLOT(quit()));
      }

};

