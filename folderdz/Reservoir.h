#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Reservoir
{
private:
    char* name;
    char* type;
    double width;
    double length;
    double depth;

public:
    Reservoir();
    explicit Reservoir(const char* n, const char* t, double w, double l, double d);
    Reservoir(const Reservoir& other);
    ~Reservoir();

    void setName(const char* n);
    void setType(const char* t);
    void setSize(double w, double l, double d);

    const char* getName() const;
    const char* getType() const;

    double getVolume() const;
    double getArea() const;

    bool isSameType(const Reservoir& other) const;
    bool compareArea(const Reservoir& other) const;

    void copyFrom(const Reservoir& other);
    void show() const;

    void saveText(ostream& out) const;
    void saveBinary(ostream& out) const;
};