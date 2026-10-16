#include "DynamicArray.h"

using namespace std;

int main()
{
    DynamicArray<int> arr;

    arr.insertAt(0, 1);
    arr.insertAt(1, 2);
    arr.insertAt(2, 3);

    cout << "Початковий масив - ";
    cout << arr << endl;

    arr.insertAt(1, 10);

    cout << "Після вставки 10 на індекс 1 - ";
    cout << arr << endl;

    arr.removeAt(2);

    cout << "після видалення елемента з індексу 2 - ";
    cout << arr << endl;

    arr.removeAt(10);

    arr.clear();

    cout << "Після очищення - ";
    cout << arr << endl;

    return 0;
}