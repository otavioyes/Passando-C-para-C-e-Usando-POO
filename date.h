#ifndef DATE_H
#define DATE_H

#include <print>
#include <compare>


class Date //dados que serão setados
{
    short m_day;
    short m_month;
    short m_year;
    bool m_valid {false};

public:

    Date(short day, short month, short year)
    {
        change(day, month, year);
    }

    void validate()
    {
        m_valid = ((m_day >= 1 && m_day <= lastDayOfMonth()) &&
                   (m_month >= 1 && m_month <= 12) &&
                   (m_year >= YEAR_MIN && m_year <= YEAR_MAX));
    }



    Date() = default;

    enum { YEAR_MIN = 1900, YEAR_MAX = 2100 };
    enum { FEBRUARY =2, JULY = 7 };


    short lastDayOfMonth()const
    {
        return m_month != FEBRUARY ?
                   (30 + (m_month & 1) ^ (m_month > JULY)) :
                   (28 + isLeapYear());

    }


    void change(short day, short month, short year)//verificando dados validos
    {
        m_day = day;
        m_month = month;
        m_year = year;
        validate();


    }

    void print()const //chamando a função Date dt
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




    bool isLeapYear()const
    {
        return (!(m_year & 3) && (m_year % 100)) || !(m_year % 400);
    }


    short day() const
    {
        return m_day;
    }

    short month() const
    {
        return m_month;
    }

    short year() const
    {
        return m_year;
    }

    //variavel local, só funciona no local da funca
    auto operator<=>(const Date &other)const
    {
        if (const auto cmp = m_year <=> other.m_year; cmp != 0) return cmp;
        if (const auto cmp = m_month <=> other.m_month; cmp !=0) return cmp;
        return m_day <=> other.m_day;
    }


    bool operator==(const Date &other) const
    {
        return (*this <=> other) == 0;
    }



};

#endif // DATE_H
