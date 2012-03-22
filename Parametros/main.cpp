#include <iostream>

void max(int idade1, int idade2, int& res){

    res = idade1 > idade2 ? idade1 : idade2;

    }

int main(){


  int idade1, idade2, res;

  std::cout << "Digite a 1 idade:\n"; // = AO PRINT
  std::cin >> idade1;    // = AO SCANF

  std::cout << "Digite a 2 idade:\n"; // = AO PRINT
  std::cin >> idade2;    // = AO SCANF

  max(idade1, idade2, res );

  std::cout << "resultado: " << res<<"\n";

    return 0;
      }




