#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString str1("Hello");
    MyString str2(str1);

    cout << str1.c_str() << endl;
    cout << str2.c_str() << endl;
    cout << str1.getLength() << endl;

    return 0;
}