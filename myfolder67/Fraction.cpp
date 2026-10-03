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

Fraction Fraction::operator*(const Fraction& other) const
{
    return Fraction(numerator * other.numerator,
        denominator * other.denominator);
}

Fraction Fraction::operator*(int num) const
{
    return Fraction(numerator * num, denominator);
}

Fraction Fraction::operator/(const Fraction& other) const
{
    return Fraction(numerator * other.denominator,
        denominator * other.numerator);
}

Fraction Fraction::operator/(int num) const
{
    return Fraction(numerator, denominator * num);
}

Fraction operator*(int num, const Fraction& f)
{
    return Fraction(num * f.numerator, f.denominator);
}

Fraction operator/(int num, const Fraction& f)
{
    return Fraction(num * f.denominator, f.numerator);
}