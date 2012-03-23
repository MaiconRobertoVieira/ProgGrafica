#include <iostream>
#include <string>



int main()
{

    std::string nome = "Maicon";

    std::cout << "Meu nome é:"<< nome;

    char nomearray[50];

    nomearray = nome.c_str();

    std:: cin >> nome;
    nome += "Vieira";

}

//pega o tamanho da string
//std::string nome = "Maicon";
//nome.length();

//procura uma letra:
//nome.find("x");


