#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QtGui>
#include <QVBoxLayout>
#include <QObject>
#include <QFile>
#include <QProgressBar>
#include <QSound>



class notepad:public QObject{
    Q_OBJECT

//class notepad{
  //  Q_OBJECT

private:
    QWidget *window;
  //  QPushButton *button;
  //  QApplication *appInt;
    QTextEdit *textEdit;
    QString text;
    QLCDNumber * lcd;
    QLCDNumber * lcd2;
    QFile * file;
    QProgressBar * bar;
    //QSound som;


    int cont;
    int cont2;


public:
    notepad(QApplication *app);
    void show();
    void setarTexto(QString string);
    void som();

public slots:
 //   void changeText(); // qedit = como setar + comeca com set
    void exibirTexto();
    void incremContador();
    void incremContador2();
    void setBarra();
    //  void setsom();

};

