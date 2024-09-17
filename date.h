#ifndef DATE_H
#define DATE_H

class Date //dados que serão setados
{

private:
    short m_day;
    short m_month;
    short m_year;
    bool m_valid {false};

public:

    void change(short day, short month, short year);

    void print()const;

    Date(short day, short month, short year);
    Date() = default;

};

#endif // DATE_H
