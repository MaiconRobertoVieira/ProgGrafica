#include <iostream>
#include "retangulo.h"

using namespace std;

int main()
{

    ponto p1;
    ponto p2;
    ponto p3;
    ponto p4;

    retangulo ret;

    cout << ret.altura();// inprime o padrao imprime a largura tambem

    cout << ret.altura(ponto, ponto, ponto, ponto);



    //return 0;  //será executado ate aqui!! apenas para efeito de testes!!!!!

    cout <<"Digite o valor de P1 x:";
    cin >> p1.x;

    cout <<"Digite o valor de P1 y :";
    cin >> p1.y;


    cout <<"Digite o valor de P2 x:";
    cin >> p2.x;

    cout <<"Digite o valor de P2 y :";
    cin >> p2.y;


    cout <<"Digite o valor de P3 x:";
    cin >> p3.x;

    cout <<"Digite o valor de P3 y :";
    cin >> p3.y;


    cout <<"Digite o valor de P4 x:";
    cin >> p4.x;

    cout <<"Digite o valor de P4 y :";
    cin >> p4.y;




    cout << "Valor de x : " << p1.x << "\n";
    cout << "Valor de y: "<< p1.y << "\n";

    cout << "Valor de x : " << p2.x << "\n";
    cout << "Valor de y: "<< p2.y << "\n";

    cout << "Valor de x : " << p3.x << "\n";
    cout << "Valor de y: "<< p3.y << "\n";

    cout << "Valor de x : " << p4.x << "\n";
    cout << "Valor de y: "<< p4.y << "\n\n";

    re

    bool set = ret.set(p1,p2,p3,p4);
    if (set==0) {
        cout <<"Nao é Retangulo "<<"\n\n";
    } else {

    cout << "Altura do Retangulo : " << ret.altura()<< "\n\n";

    cout << "Largura do Retangulo : " << ret.largura()<< "\n\n";
}
     return 0;
}// This is available in all editors.


