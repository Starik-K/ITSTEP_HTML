#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time t1, t2;

    cout << "Введіть перший час (години хвилини секунди) ";
    cin >> t1;

    cout << "Введіть другий час (години хвилини секунди) ";
    cin >> t2;

    cout << "\nПерший час: " << t1 << endl;
    cout << "Другий час: " << t2 << endl;

    Time t3 = t1 + t2;

    cout << "\nРезультат додавання: " << t3 << endl;

    Time t4 = t1 - t2;

    cout << "Результат віднімання: " << t4 << endl;

    return 0;
}