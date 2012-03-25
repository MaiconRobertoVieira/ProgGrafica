#include <iostream>
#include "func.h"

//using namespace std;

int main()
{
    void (*ptr)(void);

    ptr = func;

    ptr();

    return 0;

}

