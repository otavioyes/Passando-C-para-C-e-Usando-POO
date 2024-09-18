#include "date.h"
#include <cstdio>

Date::Date(short day, short month, short year)
{
    change(day, month, year);
}


void Date::change(short day, short month, short year)//verificando dados validos
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


