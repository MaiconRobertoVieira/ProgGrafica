#include <iostream>

using namespace std;

void init(int *ptr, int tam){

    for(int i=0;i<tam; i++){

        std::cout <<"Digite o numero:";
        std::cin >> ptr[i];
    }

    for(int i =0; i<tam; i++){

        std::cout << "Posicao: " << i << " : " << ptr[i] << "\n";

    }
}

void init2(int *ptr, int tam){
    int *orig = ptr;
    for(int i=0;i<tam; i++){

        std::cout <<"Digite o numero:";
        std::cin >> *ptr;
        ptr++;
    }

    ptr = orig;
    for(int i =0; i<tam; i++){

        std::cout << "Posicao: " << i << " : " << *ptr << "\n";

    }
}

int main()
{
    int tam;
    std::cout << "DIgite o tamanho do array";
    std::cin >> tam;

    int* d_array = new int[tam];

    init(d_array, tam);
    init2(d_array, tam);

    delete [] d_array;
    d_array = NULL;

    return 0;

}

