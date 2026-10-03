#include "Fraction.h"

Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int n, int d)
{
    numerator = n;
    denominator = d;
}

void Fraction::show() const
{
    cout << numerator << "/" << denominator << endl;
}

Fraction Fraction::operator-(const Fraction& other) const
{
    return Fraction(
        numerator * other.denominator - other.numerator * denominator,
        denominator * other.denominator
    );
}

Fraction Fraction::operator-(int num) const
{
    return Fraction(numerator - num * denominator, denominator);
}

Fraction operator-(int num, const Fraction& f)
{
    return Fraction(num * f.denominator - f.numerator, f.denominator);
}

Fraction& Fraction::operator--()
{
    numerator -= denominator;
    return *this;
}

Fraction Fraction::operator--(int)
{
    Fraction temp = *this;
    numerator -= denominator;
    return temp;
}