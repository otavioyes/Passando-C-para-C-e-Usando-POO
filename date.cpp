#include "date.h"
#include <iostream>



short Date::lastDayOfMonth()const
{
    return m_month != FEBRUARY ?
            (30 + (m_month & 1) ^ (m_month > JULY)) :
            (28 + isLeapYear());

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
        std::cout.fill('0');
        std::cout.width(2);
        std::cout << m_day << '/';
        std::cout.width(2);
        std::cout << m_month << '/' << m_year << std::endl;

    }
    else
    {
        std::cout << "Invalid Date!\n";
    }
}


