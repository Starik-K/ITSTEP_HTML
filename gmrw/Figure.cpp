#include "Figure.h"

Rectangle::Rectangle(double w, double h)
{
    width = w;
    height = h;
}

double Rectangle::GetArea()
{
    return width * height;
}

Circle::Circle(double r)
{
    radius = r;
}

double Circle::GetArea()
{
    return 3.14 * radius * radius;
}

Triangle::Triangle(double b, double h)
{
    base = b;
    height = h;
}

double Triangle::GetArea()
{
    return (base * height) / 2;
}