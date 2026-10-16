#include "DynamicArray.h"

template <typename T>
DynamicArray<T>::DynamicArray()
{
    data = nullptr;
    size = 0;
    capacity = 0;
}

template <typename T>
DynamicArray<T>::~DynamicArray()
{
    delete[] data;
}

template <typename T>
bool DynamicArray<T>::empty() const
{
    return size == 0;
}

template <typename T>
void DynamicArray<T>::reserve(int newCapacity)
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
void DynamicArray<T>::insertAt(int index, T value)
{
    if (index < 0 || index > size)
    {
        cout << "Помилка: неправильний індекс!" << endl;
        return;
    }

    if (size == capacity)
    {
        if (capacity == 0)
            reserve(1);
        else
            reserve(capacity * 2);
    }

    for (int i = size; i > index; i--)
    {
        data[i] = data[i - 1];
    }

    data[index] = value;
    size++;
}

template <typename T>
void DynamicArray<T>::removeAt(int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Помилка: неправильний індекс!" << endl;
        return;
    }

    for (int i = index; i < size - 1; i++)
    {
        data[i] = data[i + 1];
    }

    size--;
}

template <typename T>
void DynamicArray<T>::clear()
{
    size = 0;
}

template <typename U>
ostream& operator<<(ostream& os, const DynamicArray<U>& arr)
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
        {
            os << ", ";
        }
    }

    os << " }";

    return os;
}