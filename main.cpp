#include <stdio.h>


struct Date //dados que serão setados
{

private:
    short day;
    short month;
    short year;
    bool valid;//Usado para verificar se a data é válida ou não

public:
    void init(Date &dt) //utilizando o conceito de verdadeiro ou falso
    {
        dt.valid = false;
    }

    void change(Date &dt, int day, int month, int year)//verificando dados validos
    {
        dt.day = day;
        dt.month = month;
        dt.year = year;

        if ((dt.day >= 1 && dt.day <= 31) &&
            (dt.month >= 1 && dt.month <= 12) &&
            (dt.year >= 1900 && dt.year <= 2100))
        {
            dt.valid = true; //return true;
        }
        else{
            dt.valid = false; //return false;
        }
    }

    void print(const Date &dt)//chamando a função Date dt
    {
        if(dt.valid){
            printf("%02d/%02d/%d\n", dt.day, dt.month, dt.year);//printado data válida ou inválido
        }else{
            printf("Invalid Date!\n");
        }
    }

};



/*
 *PRINCIPAIS FALTAS/EMULAR DE POO EM C

 * 1. Não há como forçar a iniciallização
 * 2. Todas as propriedades das funcções são públicas. OK
 * 3. As funções são como outras quaisquer, funções globais. OK
 *
 * 4. Repetindo a palavra reservada Struct - OK
 * 5. Usar referencias ao invés de endereço - OK
 * 6. Valid como short ao invés de bool - OK



*/



int main()
{
    Date pgt;

    pgt.print(pgt);
    //pgt.init(pgt);
    pgt.change(pgt, 31,01,2101);
    pgt.print(pgt); //chamando a função printDate

    printf("Size: %llu\n", sizeof(pgt));

    return 0;
}
