#include "date.h"
#include <iostream>

//É possível fazer resto da divisão com &, mas só funciona em potencia de 2
//A regra é n-1

int main()
{
    Date d1(1, 1, 2000), d2(1, 1, 1999);

    if (d1.compare(d2) &gt; 0) cout &lt;&lt; "d1 &gt; d2\n";
    d2.change(1, 1, 2000);
    if (d1.compare(d2) == 0) cout &lt;&lt; "d1 == d2\n";
    d2.change(31, 1, 2000);
    if (d1.compare(d2) &lt; 0) cout &lt;&lt; "d1 &lt; d2\n";

    return 0;
}
