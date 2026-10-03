#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
    char author[100];
    char title[100];
    char publisher[100];
    int year;
    int quantity;
    int pages;

public:
    Book();
    explicit Book(const char* a, const char* t, const char* p, int y, int q, int pg);

    void show() const;
    const char* getAuthor() const;
    const char* getPublisher() const;
    int getYear() const;
};