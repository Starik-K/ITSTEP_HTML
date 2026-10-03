#pragma once
#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

    void normalize();

public:
    Time();
    Time(int h, int m, int s);

    friend ostream& operator<<(ostream& out, const Time& t);
    friend istream& operator>>(istream& in, Time& t);

    Time operator+(const Time& other) const;
    Time operator-(const Time& other) const;
};