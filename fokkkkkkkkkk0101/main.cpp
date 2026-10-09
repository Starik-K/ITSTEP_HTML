#include <iostream>
#include <utility>
#include "MyString.h"

using namespace std;

int main()
{
    MyString str1("Hello ");
    MyString str2("World!");

    MyString str3 = str1 + str2;

    cout << "Рядок 1: " << str1 << endl;
    cout << "Рядок 2: " << str2 << endl;
    cout << "Об'єднаний рядок: " << str3 << endl;
    cout << "Довжина: " << str3.getLength() << endl;

    MyString str4(std::move(str3));

    cout << "Після переміщення: " << str4 << endl;
    cout << "Старий рядок: " << str3 << endl;

    MyString str5;
    str5 = std::move(str4);

    cout << "Після переміщення присвоювання: " << str5 << endl;

    return 0;
}