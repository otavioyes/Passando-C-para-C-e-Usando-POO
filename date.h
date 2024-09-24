#ifndef DATE_H
#define DATE_H

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


    void print()const;

    void change(short day, short month, short year);



    Date() = default;

    enum { YEAR_MIN = 1900, YEAR_MAX = 1900 };
    enum { FEBRUARY =2, JULY = 7 };


    short lastDayOfMonth()const;


    bool isLeapYear()const
    {
        return (!(m_year & 3) && (m_year % 100)) || !(m_year % 400);
    }

    int compare(const Date &other) const;

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

    bool operator< (const Date &other) const
    {
        return compare (other) > 0;
    }


    bool operator== (const Date &other) const
    {
        return compare (other) == 0;
    }

    bool operator>= (const Date &other) const
    {
        return compare (other) >= 0;
    }

    bool operator<= (const Date &other) const
    {
        return compare (other) <= 0;
    }

    bool operator!= (const Date &other) const
    {
        return compare (other) != 0;
    }

};

#endif // DATE_H
