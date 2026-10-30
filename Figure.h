#pragma once
#include <iostream>
using namespace std;

class Figure
{
public:
    virtual double GetArea() = 0;
    virtual ~Figure() {}
};

class Rectangle : public Figure
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h);
    double GetArea() override;
};

class Circle : public Figure
{
private:
    double radius;

public:
    Circle(double r);
    double GetArea() override;
};

class Triangle : public Figure
{
private:
    double base;
    double height;

public:
    Triangle(double b, double h);
    double GetArea() override;
};