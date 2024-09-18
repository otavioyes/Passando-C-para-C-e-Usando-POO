#include "date.h"
#include <cstdio>



short Date::lastDayMonth() const
{
    return 31;
}


// Divisível por 4 e não divisível por 100: o ano é bissexto.
// Exemplo: 2024 é divisível por 4 e não por 100, logo é bissexto.
//
//Divisível por 100 e não por 400: o ano não é bissexto.
//  Exemplo: 1900 é divisível por 100, mas não por 400, então não é bissexto.
// Divisível por 400: o ano é bissexto


bool Date::isLeapYear() const
{
    if(isLeapYear() % 4 == 0){
        if(isLeapYear() % 100 == 4){
            if(isLeapYear() % 400 = 0){

                return true; // ano div por 400 é bissexto
            }
            return false; // Ano divisível por 100 mas não por 400, não é bissexto
        }
        return true; // Ano divisível por 4 mas não por 100, é bissexto
    }
    return false; //Não divisível por 4, não é bissexto

}




void Date::change(short day, short month, short year)//verificando dados validos
{
    m_day = day;
    m_month = month;
    m_year = year;
    m_valid();


}

void Date::print()const //chamando a função Date dt
{
    if(m_valid)
    {
        printf("%02d/%02d/%d\n", m_day, m_month, m_year);
    }else
    {
        printf("Invalid Date!\n");
    }
}


