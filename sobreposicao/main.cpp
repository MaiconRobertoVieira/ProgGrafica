#include <iostream>

int mult(int a, int b){
    return a*b;
    }

float mult(float a, float b){
    return a*b;

}

double mult(double a, double b){
    return a*b;
}

int main(){

  int i_a =2;
  float f_a = 2.1;
  double d_a = 2.2;

  int i_b = 4;
  float f_b =4.1;
  double d_b =4.2;


  std::cout << mult(i_a, i_b)<< "\n";
  std::cout << mult(d_a, d_b)<< "\n";
  std::cout << mult(f_a, f_b)<< "\n";


    return 0;
      }


