#include <stdio.h>


struct Date //dados que serão setados
{

private:
    short m_day;
    short m_month;
    short m_year;
    bool m_valid {false}; /*inicialização de membro in class*/

public:

    void change(int day, int month, int year)//verificando dados validos
    {
        m_day = day;
        m_month = month;
        m_year = year;

        if ((m_day >= 1 && m_day <= 31) &&
            (m_month >= 1 && m_month <= 12) &&
            (m_year >= 1900 && m_year <= 2100))
        {
            m_valid = true; //return true;
        }
        else{
            m_valid = false; //return false;
        }
    }

    void print()const //chamando a função Date dt
    {
        if(m_valid){
            printf("%02d/%02d/%d\n", m_day, m_month, m_year);//printado data válida ou inválido
        }else{
            printf("Invalid Date!\n");
        }
    }

};



/*
 *PRINCIPAIS FALTAS/EMULAR DE POO EM C

 * 1. Não há como forçar a iniciallização - OK
 * 2. Todas as propriedades das funcções são públicas - OK
 * 3. As funções são como outras quaisquer, funções globais - OK
 *
 * 4. Repetindo a palavra reservada Struct - OK
 * 5. Usar referencias ao invés de endereço - OK
 * 6. Valid como short ao invés de bool - OK



*/



int main()
{
    Date pgt;

    pgt.print();
    pgt.change(31,01,2100);
    pgt.print(); //chamando a função printDate

    printf("Size: %llu\n", sizeof(pgt));

    return 0;
}
