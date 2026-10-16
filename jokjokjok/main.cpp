#include "Array.h"

using namespace std;

int main()
{
    Array<int> arr;

    arr.pushFront(3);
    arr.pushFront(2);
    arr.pushFront(1);

    cout << "Масив: " << arr << endl;

    arr.popFront();

    cout << "Після видалення першого елемента: " << arr << endl;

    cout << "Масив порожній: " << (arr.empty() ? "Т" : "н") << endl;

    arr.popFront();
    arr.popFront();

    cout << "Після видалення всіх елементів: " << arr << endl;

    cout << "Масив порожній: " << (arr.empty() ? "Т" : "Н") << endl;

    arr.popFront();

    return 0;
}
