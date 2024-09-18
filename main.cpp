#include "date.h"
#include <iostream>

int main()
{
    Date pgt(1, 1, 2000);
    Date pgt2(1, 1, 1996);
    Date pgt3(1, 1, 1800);

    std::cout << pgt.isLeapYear() << std::endl;
    std::cout << pgt2.isLeapYear() << std::endl;
    std::cout << pgt3.isLeapYear() << std::endl;

    return 0;
}
