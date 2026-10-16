#include "Array.h"

template <typename T>
Array<T>::Array()
{
    data = nullptr;
    size = 0;
    capacity = 0;
}

template <typename T>
Array<T>::~Array()
{
    delete[] data;
}

template <typename T>
bool Array<T>::empty() const
{
    return size == 0;
}

template <typename T>
void Array<T>::reserve(int newCapacity)
{
    if (newCapacity <= capacity)
        return;

    T* newData = new T[newCapacity];

    for (int i = 0; i < size; i++)
    {
        newData[i] = data[i];
    }

    delete[] data;
    data = newData;
    capacity = newCapacity;
}

template <typename T>
void Array<T>::pushFront(T value)
{
    if (size == capacity)
    {
        if (capacity == 0)
            reserve(1);
        else
            reserve(capacity * 2);
    }

    for (int i = size; i > 0; i--)
    {
        data[i] = data[i - 1];
    }

    data[0] = value;
    size++;
}

template <typename T>
void Array<T>::popFront()
{
    if (empty())
        return;

    for (int i = 0; i < size - 1; i++)
    {
        data[i] = data[i + 1];
    }

    size--;
}

template <typename U>
ostream& operator<<(ostream& os, const Array<U>& arr)
{
    if (arr.empty())
    {
        os << "{}";
        return os;
    }

    os << "{ ";

    for (int i = 0; i < arr.size; i++)
    {
        os << arr.data[i];

        if (i < arr.size - 1)
            os << ", ";
    }

    os << " }";

    return os;
}
