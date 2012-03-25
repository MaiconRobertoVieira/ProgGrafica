#include <iostream>

using namespace std;


void func(int* ponteiro){
    *ponteiro = 10;
}
int main()
{
    int *ptr = new int;
        *ptr = 5;

    std::cout << "Endereco:"<< ptr << "\n" << "Ponteriro Inicial: "<< *ptr << "\n\n";
        func(ptr);

    std::cout << "Endereco:"<< ptr << "\n" << "Ponteriro Alterado: "<< *ptr << "\n\n";

        delete ptr; // Deleta o conteudo do ponteiro
        ptr = NULL; // Aponta o ponteiro para NADA

        //Nao Pode mandar imprimir
   // std::cout << "Endereco:"<< ptr << "\n" << "DELETE: "<< *ptr << "\n\n";

}

