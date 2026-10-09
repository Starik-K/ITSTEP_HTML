#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    Time t1(12, 30, 45);
    Time t2(12, 30, 45);

    cout << "Початковий час: " << t1 << endl;

    cout << "Префіксний ++: " << ++t1 << endl;
    cout << "Постфіксний ++: " << t1++ << endl;
    cout << "Після постфіксного ++: " << t1 << endl;

    cout << "Префіксний --: " << --t1 << endl;
    cout << "Постфіксний --: " << t1-- << endl;
    cout << "Після постфіксного --: " << t1 << endl;

    if (t1 <=> t2 == strong_ordering::equal)
        cout << "Час однаковий" << endl;
    else if ((t1 <=> t2) == strong_ordering::less)
        cout << "Перший час менший" << endl;
    else
        cout << "Перший час більший" << endl;

    Time t3(0, 0, 0);
    --t3;
    cout << "Час після декременту нуля: " << t3 << endl;

    return 0;
}