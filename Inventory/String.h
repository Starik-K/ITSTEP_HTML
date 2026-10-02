#pragma once

class String
{
private:
    char* text;
    int length;

public:
    String();
    String(const char* str);
    String(const String& other);
    ~String();

    String& operator=(const String& other);

    const char* c_str() const;
    int getLength() const;
};