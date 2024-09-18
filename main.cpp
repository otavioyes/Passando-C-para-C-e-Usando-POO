#include "date.h"


int main()
{
    Date pgt(1, 1, 2000);

    pgt.print();
    pgt.change(31,1,2100);
    pgt.print(); //chamando a função printDate

    Date pgt2;

    pgt2.print();


    return 0;
}
