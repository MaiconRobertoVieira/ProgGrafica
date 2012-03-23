#include <iostream>

int strlen (char str[]){
    int c = 0;
    while(str[c] != '\0'){
        c++;
    }
    return c;
}

int main()
{
    char t[]= "Maicon";

    std::cout << "Numero de Caracteres: " << strlen(t)<< "\n";

    return 0;
}



