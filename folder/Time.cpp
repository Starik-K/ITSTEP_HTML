
#include "Time.h"

Time::Time(int h, int m, int s)
    : hours(h), minutes(m), seconds(s)
{
    normalize();
}

void Time::normalize()
{
    int total = hours * 3600 + minutes * 60 + seconds;

    if (total < 0)
        total = 0;

    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;
}

std::strong_ordering Time::operator<=>(const Time& other) const
{
    if (hours != other.hours)
        return hours <=> other.hours;

    if (minutes != other.minutes)
        return minutes <=> other.minutes;

    return seconds <=> other.seconds;
}

Time& Time::operator++()
{
    seconds++;
    normalize();
    return *this;
}

Time Time::operator++(int)
{
    Time old = *this;
    ++(*this);
    return old;
}

Time& Time::operator--()
{
    if (hours == 0 && minutes == 0 && seconds == 0)
        return *this;

    seconds--;
    normalize();
    return *this;
}

Time Time::operator--(int)
{
    Time old = *this;
    --(*this);
    return old;
}

std::ostream& operator<<(std::ostream& out, const Time& t)
{
    out << std::setfill('0')
        << std::setw(2) << t.hours << ":"
        << std::setw(2) << t.minutes << ":"
        << std::setw(2) << t.seconds;

    return out;
}

std::istream& operator>>(std::istream& in, Time& t)
{
    in >> t.hours >> t.minutes >> t.seconds;

    if (in)
        t.normalize();

    return in;
}