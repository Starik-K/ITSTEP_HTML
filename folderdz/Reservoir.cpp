#include "Reservoir.h"
#include <fstream>

Reservoir::Reservoir()
{
    name = new char[8];
    strcpy(name, "Unknown");

    type = new char[8];
    strcpy(type, "Unknown");

    width = 0;
    length = 0;
    depth = 0;
}

Reservoir::Reservoir(const char* n, const char* t, double w, double l, double d)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);

    type = new char[strlen(t) + 1];
    strcpy(type, t);

    width = w;
    length = l;
    depth = d;
}

Reservoir::Reservoir(const Reservoir& other)
{
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);

    type = new char[strlen(other.type) + 1];
    strcpy(type, other.type);

    width = other.width;
    length = other.length;
    depth = other.depth;
}

Reservoir::~Reservoir()
{
    delete[] name;
    delete[] type;
}

void Reservoir::setName(const char* n)
{
    delete[] name;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

void Reservoir::setType(const char* t)
{
    delete[] type;
    type = new char[strlen(t) + 1];
    strcpy(type, t);
}

void Reservoir::setSize(double w, double l, double d)
{
    width = w;
    length = l;
    depth = d;
}

const char* Reservoir::getName() const
{
    return name;
}

const char* Reservoir::getType() const
{
    return type;
}

double Reservoir::getVolume() const
{
    return width * length * depth;
}

double Reservoir::getArea() const
{
    return width * length;
}

bool Reservoir::isSameType(const Reservoir& other) const
{
    return strcmp(type, other.type) == 0;
}

bool Reservoir::compareArea(const Reservoir& other) const
{
    if (!isSameType(other))
    {
        cout << "Vodoimy riznogo typu!" << endl;
        return false;
    }

    return getArea() > other.getArea();
}

void Reservoir::copyFrom(const Reservoir& other)
{
    if (this != &other)
    {
        setName(other.name);
        setType(other.type);

        width = other.width;
        length = other.length;
        depth = other.depth;
    }
}

void Reservoir::show() const
{
    cout << "Nazva: " << name << endl;
    cout << "Typ: " << type << endl;
    cout << "Shyryna: " << width << endl;
    cout << "Dovzhyna: " << length << endl;
    cout << "Hlybyna: " << depth << endl;
    cout << "Ploshcha: " << getArea() << endl;
    cout << "Obsyag: " << getVolume() << endl;
}

void Reservoir::saveText(ostream& out) const
{
    out << name << " "
        << type << " "
        << width << " "
        << length << " "
        << depth << endl;
}

void Reservoir::saveBinary(ostream& out) const
{
    size_t nameLen = strlen(name) + 1;
    size_t typeLen = strlen(type) + 1;

    out.write((char*)&nameLen, sizeof(nameLen));
    out.write(name, nameLen);

    out.write((char*)&typeLen, sizeof(typeLen));
    out.write(type, typeLen);

    out.write((char*)&width, sizeof(width));
    out.write((char*)&length, sizeof(length));
    out.write((char*)&depth, sizeof(depth));
}