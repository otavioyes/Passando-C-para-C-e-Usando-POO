export module date;

import std;

#include <cstdint>


export class Date
{
    uint8_t m_day; // vai de 0 até 255
    uint8_t m_month;
    uint16_t m_year;
    bool m_valid {false};

public:

    Date(uint8_t day, uint8_t month, uint16_t year)
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


    uint8_t lastDayOfMonth()const
    {
        return m_month != FEBRUARY ?
                   (30 + (m_month & 1) ^ (m_month > JULY)) :
                   (28 + isLeapYear());

    }


    void change(uint8_t day, uint8_t month, uint16_t year)//verificando dados validos
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


    uint8_t day() const
    {
        return m_day;
    }

    uint8_t month() const
    {
        return m_month;
    }

    uint16_t year() const
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


