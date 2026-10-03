#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    Fraction a(5, 3);
    Fraction b(2, 3);

    cout << "a = ";
    a.show();

    cout << "b = ";
    b.show();

    cout << "\n віднімання: \n";

    Fraction c = a - b;
    cout << "Дріб - дріб = ";
    c.show();

    Fraction d = 3 - a;
    cout << "Ціле число - дріб = ";
    d.show();

    Fraction e = a - 2;
    cout << "Дріб - ціле число = ";
    e.show();

    cout << "\nДекремент:\n";

    Fraction f(5, 3);

    cout << "Початковий дріб: ";
    f.show();

    cout << "Префіксний декремент (--f): ";
    (--f).show();

    cout << "Постфіксний декремент (f--): ";
    (f--).show();

    cout << "Після постфіксного декременту: ";
    f.show();

    return 0;
}