#include "Time.h"
#include <iomanip>

Time::Time()
{
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time(int h, int m, int s)
{
    hours = h;
    minutes = m;
    seconds = s;
    normalize();
}

void Time::normalize()
{
    if (seconds < 0)
        seconds = 0;

    if (minutes < 0)
        minutes = 0;

    if (hours < 0)
        hours = 0;

    minutes += seconds / 60;
    seconds %= 60;

    hours += minutes / 60;
    minutes %= 60;
}

ostream& operator<<(ostream& out, const Time& t)
{
    out << setfill('0') << setw(2) << t.hours << ":"
        << setw(2) << t.minutes << ":"
        << setw(2) << t.seconds;

    return out;
}

istream& operator>>(istream& in, Time& t)
{
    in >> t.hours >> t.minutes >> t.seconds;
    t.normalize();

    return in;
}

Time Time::operator+(const Time& other) const
{
    Time result(
        hours + other.hours,
        minutes + other.minutes,
        seconds + other.seconds
    );

    return result;
}

Time Time::operator-(const Time& other) const
{
    int total1 = hours * 3600 + minutes * 60 + seconds;
    int total2 = other.hours * 3600 + other.minutes * 60 + other.seconds;

    int result = total1 - total2;

    if (result < 0)
        result = 0;

    return Time(result / 3600, (result % 3600) / 60, result % 60);
}