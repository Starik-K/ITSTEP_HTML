#pragma once
#include <iostream>

class MyString
{
private:
    char* data;
    int length;

public:
    MyString();
    MyString(const char* str);
    MyString(const MyString& other);
    MyString(MyString&& other) noexcept;
    ~MyString();

    MyString& operator=(const MyString& other);
    MyString& operator=(MyString&& other) noexcept;

    friend MyString operator+(const MyString& first, const MyString& second);
    friend std::ostream& operator<<(std::ostream& out, const MyString& str);

    int getLength() const;
    const char* c_str() const;
};