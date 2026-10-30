#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name;

public:
    Animal(string n);

    virtual void Sound() = 0;
    virtual void Show();
    virtual void Type() = 0;

    virtual ~Animal();
};

class Dog : public Animal
{
private:
    string breed;

public:
    Dog(string n, string b);
    void Sound() override;
    void Type() override;
};

class Cat : public Animal
{
private:
    string breed;

public:
    Cat(string n, string b);
    void Sound() override;
    void Type() override;
};

class Parrot : public Animal
{
private:
    string color;

public:
    Parrot(string n, string c);
    void Sound() override;
    void Type() override;
};

class Hamster : public Animal
{
private:
    string kind;

public:
    Hamster(string n, string k);
    void Sound() override;
    void Type() override;
};