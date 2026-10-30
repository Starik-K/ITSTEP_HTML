#include "Animal.h"

Animal::Animal(string n)
{
    name = n;
}

Animal::~Animal()
{
}

void Animal::Show()
{
    cout << "Name: " << name << endl;
}

Dog::Dog(string n, string b) : Animal(n)
{
    breed = b;
}

void Dog::Sound()
{
    cout << "Woof! Woof!" << endl;
}

void Dog::Type()
{
    cout << "Type: Dog, breed: " << breed << endl;
}

Cat::Cat(string n, string b) : Animal(n)
{
    breed = b;
}

void Cat::Sound()
{
    cout << "Meow! Meow!" << endl;
}

void Cat::Type()
{
    cout << "Type: Cat, breed: " << breed << endl;
}

Parrot::Parrot(string n, string c) : Animal(n)
{
    color = c;
}

void Parrot::Sound()
{
    cout << "Squawk! Squawk!" << endl;
}

void Parrot::Type()
{
    cout << "Type: Parrot, color: " << color << endl;
}

Hamster::Hamster(string n, string k) : Animal(n)
{
    kind = k;
}

void Hamster::Sound()
{
    cout << "Squeak! Squeak!" << endl;
}

void Hamster::Type()
{
    cout << "Type: Hamster, kind: " << kind << endl;
}