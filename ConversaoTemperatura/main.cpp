#include <iostream>

void c2f(double& celsius){

    celsius = celsius * 9/5 +32;

    }

int main(){

  double celsius;

  std::cout << "Digite a Temperatura:\n"; // = AO PRINT
  std::cin >> celsius;    // = AO SCANF

  c2f(celsius);

  std::cout << "Fahrenheit: " << celsius<<"\n";

    return 0;
      }



