#pragma once
#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int n, int d);

    void show() const;

    Fraction operator*(const Fraction& other) const;
    Fraction operator*(int num) const;

    Fraction operator/(const Fraction& other) const;
    Fraction operator/(int num) const;

    friend Fraction operator*(int num, const Fraction& f);
    friend Fraction operator/(int num, const Fraction& f);
};