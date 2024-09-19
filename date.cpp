#include "date.h"
#include <cstdio>



short Date::lastDayOfMonth()const
{
    return m_month != FEBRUARY ?
            (30 + (m_month & 1) ^ (m_month > JULY)) :
            (28 + isLeapYear());

}

short Date::compare()
{

}



void Date::change(short day, short month, short year)//verificando dados validos
{
    m_day = day;
    m_month = month;
    m_year = year;
    validate();


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


