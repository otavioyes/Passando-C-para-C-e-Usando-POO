#include "date.h"
#include <cstdio>



short Date::lastDayMonth() const
{
    return 31;
}

bool Date::isLeapYear() const
{
    return false;
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


