#include "Worker.h"
#include <cstring>

Worker::Worker()
{
    strcpy(name, "Unknown");
    strcpy(position, "Unknown");
    year = 0;
    salary = 0;
}

Worker::Worker(const char* n, const char* p, int y, double s)
{
    strcpy(name, n);
    strcpy(position, p);
    year = y;
    salary = s;
}

void Worker::show() const
{
    cout << "PIB: " << name << endl;
    cout << "Posada: " << position << endl;
    cout << "Rik pryiomu: " << year << endl;
    cout << "Zarplata: " << salary << endl;
}

const char* Worker::getPosition() const
{
    return position;
}

int Worker::getYear() const
{
    return year;
}

double Worker::getSalary() const
{
    return salary;
}