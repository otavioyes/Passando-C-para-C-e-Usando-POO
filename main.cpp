import date;

//É possível fazer resto da divisão com &, mas só funciona em potencia de 2
//A regra é n-1

int main()
{
    Date d1(11, 12, 2000), d2(1, 1, 1999);
    d1.print();

    std::cout << sizeof(d1) << '\n';

    return 0;
}
