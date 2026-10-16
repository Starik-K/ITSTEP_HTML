#pragma once

#include <iostream>
using namespace std;

template <typename T>
class Array
{
private:
    T* data;
    int size;
    int capacity;

public:
    Array();
    ~Array();

    bool empty() const;
    void reserve(int newCapacity);
    void pushFront(T value);
    void popFront();

    template <typename U>
    friend ostream& operator<<(ostream& os, const Array<U>& arr);
};

#include "Array.cpp"
