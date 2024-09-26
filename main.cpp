#include "date.h"
#include <iostream>

//É possível fazer resto da divisão com &, mas só funciona em potencia de 2
//A regra é n-1

int main()
{
    Date d1(01, 01, 2000), d2(1, 1, 1999);
    d1.print();



    if (d1 > d2) std::cout << "d1 > d2\n";
    if (d1 >= d2) std::cout << "d1 >= d2\n";
    if (d1 != d2) std::cout << "d1 != d2\n";
    d2.change(1, 1, 2000);
    if(d1 == d2) std::cout << "d1 == d2\n";
    d2.change(31, 1, 2000);
    if (d1 < d2) std::cout << "d1 < d2\n";
    if (d1 <= d2) std::cout << "d1 <= d2\n";

    return 0;
}
