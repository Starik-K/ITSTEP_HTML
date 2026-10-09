#include "MyString.h"
#include <cstring>

MyString::MyString() : data(nullptr), length(0)
{
}

MyString::MyString(const char* str)
{
    if (str == nullptr)
    {
        data = nullptr;
        length = 0;
    }
    else
    {
        length = strlen(str);
        data = new char[length + 1];
        strcpy(data, str);
    }
}

MyString::MyString(const MyString& other)
{
    length = other.length;

    if (other.data != nullptr)
    {
        data = new char[length + 1];
        strcpy(data, other.data);
    }
    else
    {
        data = nullptr;
    }
}

MyString::MyString(MyString&& other) noexcept
    : data(other.data), length(other.length)
{
    std::cout << "[Move Constructor]\n";

    other.data = nullptr;
    other.length = 0;
}

MyString::~MyString()
{
    delete[] data;
}

MyString& MyString::operator=(const MyString& other)
{
    if (this != &other)
    {
        delete[] data;

        length = other.length;

        if (other.data != nullptr)
        {
            data = new char[length + 1];
            strcpy(data, other.data);
        }
        else
        {
            data = nullptr;
        }
    }

    return *this;
}

MyString& MyString::operator=(MyString&& other) noexcept
{
    std::cout << "[Move Assignment]\n";

    if (this != &other)
    {
        delete[] data;

        data = other.data;
        length = other.length;

        other.data = nullptr;
        other.length = 0;
    }

    return *this;
}

MyString operator+(const MyString& first, const MyString& second)
{
    MyString result;

    result.length = first.length + second.length;
    result.data = new char[result.length + 1];

    int i = 0;

    for (; i < first.length; i++)
        result.data[i] = first.data[i];

    for (int j = 0; j < second.length; j++, i++)
        result.data[i] = second.data[j];

    result.data[result.length] = '\0';

    return result;
}

std::ostream& operator<<(std::ostream& out, const MyString& str)
{
    if (str.data != nullptr)
        out << str.data;

    return out;
}

int MyString::getLength() const
{
    return length;
}

const char* MyString::c_str() const
{
    return data;
}