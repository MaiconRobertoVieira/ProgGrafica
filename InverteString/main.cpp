#include <iostream>
#include <strings.h>

//using namespace std; // quando usar este nao precisa utilizar o std::

char *inverte(char *str){
    int sz = strlen(str);
    char *inv_str = new char [sz+1];// se utiliza o +1 pois temos o \0
    std::cout << "\nImprimindo o nome que foi passado:" << str <<"\n";

    int i,j;

    for(i=0,j=sz-1;i<sz;i++,j--){
        inv_str[j] = str[i];
        std::cout <<"\nPercorrendo o Array inicial: "<< inv_str[j];
    }
    inv_str[sz] = '\0';
    return inv_str;
}
int main()
{
    char nome [] = "Maicon";
    char *invertido = inverte(nome);
    std::cout << "\n\nNome Invertido: " << invertido <<"\n\n";
}
