#include <iostream>

using namespace std;

int main()
{

    int a = 10;
    int b = 20;

    int *x = &a;
    int *y = &b;


    cout << "Ponteiro A: " << *x << "\n";
    cout << "Ponteiro B: " << *y << "\n";

}

