#pragma once
#include <iostream>
#include <iomanip>
#include <compare>

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

    void normalize();

public:
    Time(int h = 0, int m = 0, int s = 0);

    void normalize();

    std::strong_ordering operator<=>(const Time& other) const;

    Time& operator++();
    Time operator++(int);

    Time& operator--();
    Time operator--(int);

    friend std::ostream& operator<<(std::ostream& out, const Time& t);
    friend std::istream& operator>>(std::istream& in, Time& t);
};