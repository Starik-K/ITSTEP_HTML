#pragma once

class MyString
{
private:
    char* str;
    int length;

public:
    MyString();
    MyString(const char* text);
    MyString(const MyString& other);
    ~MyString();

    int getLength() const;
    const char* c_str() const;
};