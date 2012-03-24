#include <iostream>

using namespace std;

int main()
{
    int i;
    int array[]= {1,2,3,4,5,6,7,8,9,10};

    int *ptr = array;

    for(i=0; i<10;i++){
        std::cout <<"Conteudo:" << *ptr <<"\n";
        ptr++;
    }

}

