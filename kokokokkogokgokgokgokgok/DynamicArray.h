#pragma once

#include <iostream>
using namespace std;

template <typename T>
class DynamicArray
{
private:
    T* data;
    int size;
    int capacity;

public:
    DynamicArray();
    ~DynamicArray();

    bool empty() const;
    void reserve(int newCapacity);

    void insertAt(int index, T value);
    void removeAt(int index);
    void clear();

    template <typename U>
    friend ostream& operator<<(ostream& os, const DynamicArray<U>& arr);
};

#include "DynamicArray.cpp"