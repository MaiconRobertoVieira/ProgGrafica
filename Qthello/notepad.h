#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QtGui>
#include <QVBoxLayout>
#include <QObject>

class notepad:public QObject{
    Q_OBJECT

//class notepad{
  //  Q_OBJECT

private:
    QWidget *window;
  //   QPushButton *button;
  //  QApplication *appInt;
    QTextEdit *textEdit;
    QString text;



public:
    notepad(QApplication *app);
    void show();
    void setarTexto(QString string);
public slots:
 //   void changeText(); // qedit = como setar + comeca com set
    void exibirTexto();
};

