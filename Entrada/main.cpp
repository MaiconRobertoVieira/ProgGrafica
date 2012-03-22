#include <iostream>

int max(int idade1, int idade2)
{
    return idade1 > idade2 ? idade1 : idade2;
}

int main(){


  int idade1, idade2;

  std::cout << "Digite a 1 idade:\n"; // = AO PRINT
  std::cin >> idade1;    // = AO SCANF

  std::cout << "Digite a 2 idade:\n"; // = AO PRINT
  std::cin >> idade2;    // = AO SCANF

  std::cout << max(idade1, idade2);

    return 0;
      }




