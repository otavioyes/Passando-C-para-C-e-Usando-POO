#include <stdio.h>


struct Date //dados que serão setados
{

private:
    short m_day;
    short m_month;
    short m_year;
    bool m_valid {false}; /*inicialização de membro in class*/

public:

    void change(short day, short month, short year)//verificando dados validos
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


    //Date() = default; //C++ 11


    Date(){}; //Constructor Default

    //Constructor
    //  Date(short day, short month, short year)
    // {
    //  change(day, month, year);
    // }

};





int main()
{
    Date pgt;

    pgt.print();
    pgt.change(31,01,2100);
    pgt.print(); //chamando a função printDate

    //Date pgt2;

    //pgt2.print();


    return 0;
}
