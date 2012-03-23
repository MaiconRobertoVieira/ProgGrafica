#include <iostream>

void troca(int *x, int *y){

    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    }

int main(){


  int int1, int2;

  int *x = &int1;
  int *y = &int2;

  std::cout << "Digite um numero:"; // = AO PRINT
  std::cin >> int1;    // = AO SCANF

  std::cout << "Digite outro numero:"; // = AO PRINT
  std::cin >> int2;    // = AO SCANF

  std::cout << "\nPonteiro 1 inicial :" << *x <<"\n";
  std::cout << "Ponteiro 2 inicial :" << *y << "\n\n";


  std::cout << "Invertendo................" <<"\n\n" ;


  troca(x,y);


  std::cout << "Ponteiro 1 final : " << *x <<"\n";
  std::cout << "Ponteiro 2 final : " << *y <<"\n";

    return 0;
      }
