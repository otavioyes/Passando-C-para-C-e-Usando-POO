#include "date.h"
#include <print>



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
        std::println("{:02}/{:02}/{}", m_day, m_month, m_year);

    }
    else
    {
        std::println ("Invalid Date!");
    }
}


