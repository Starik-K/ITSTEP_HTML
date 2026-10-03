#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    Fraction a(2, 3);
    Fraction b(4, 5);

    cout << "a = ";
    a.show();

    cout << "b = ";
    b.show();

    cout << "\nMnozhennia:\n";

    Fraction c = a * b;
    cout << "Fraction * Fraction = ";
    c.show();

    Fraction d = 3 * a;
    cout << "int * Fraction = ";
    d.show();

    Fraction e = a * 3;
    cout << "Fraction * int = ";
    e.show();

    cout << "\nDilennia:\n";

    Fraction f = a / b;
    cout << "Fraction / Fraction = ";
    f.show();

    Fraction g = 3 / a;
    cout << "int / Fraction = ";
    g.show();

    Fraction h = a / 3;
    cout << "Fraction / int = ";
    h.show();

    return 0;
}