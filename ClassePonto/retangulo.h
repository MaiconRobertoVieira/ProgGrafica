#include "ponto.h"
using namespace std;

class retangulo{


private:
   ponto p1;
   ponto p2;
   ponto p3;
   ponto p4;

public:
    retangulo(){
        p1.x = 0;
        p1.y = 0;
        p2.x = 0;
        p2.y = 0;
        p3.x = 0;
        p3.y = 0;
        p4.x = 0;
        p4.y = 0;
        std::cout <<"Construtor padrao" <<"\n";
    }

    retangulo(ponto po1,ponto po2,ponto po3, ponto po4){
        p1.x = po1.x;
        p1.y = po1.y;
        p2.x = po2.x;
        p2.y = po2.y;
        p3.x = po3.x;
        p3.y = po3.y;
        p4.x = po4.x;
        p4.y = po4.y;
        std::cout <<"Construtor parametrizado:" <<"\n";
    }

    bool set(ponto pt1,ponto pt2, ponto pt3, ponto pt4){
        //setado as variaveis internas
        //p1.x=pt1.x;
        //p1.y=pt1.y;
        //p2.x=pt2.x;
        //p2.y=pt2.y;
        //p3.x=pt3.x;
        //p3.y=pt3.y;
        //p4.x=pt4.x;
        //p4.y=pt4.y;

        //implementa verificação;
        if (((pt1.x == pt3.x)&&(pt2.x == pt4.x))&&((pt1.y == pt2.y)&&(pt3.y==pt4.y))) {

            return true;
        }
        return false;



    }

public:
    //int largura(ponto p1,ponto p2){
    int largura(){
        return p2.x - p1.x;

    }

    //int altura(ponto p3, ponto p1){
    int altura(){
        return p1.y - p3.y;
    }

};
