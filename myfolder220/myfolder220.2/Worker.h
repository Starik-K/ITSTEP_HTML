#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Worker
{
private:
    char name[100];
    char position[100];
    int year;
    double salary;

public:
    Worker();
    explicit Worker(const char* n, const char* p, int y, double s);

    void show() const;
    const char* getPosition() const;
    int getYear() const;
    double getSalary() const;
};