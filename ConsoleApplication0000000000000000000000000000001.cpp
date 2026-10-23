//burmaldinka
#include <iostream>
#include <string>
using namespace std;

class Character
{
protected:
    string name;
    int health;
    int shield;

public:
    Character(string n)
    {
        name = n;
        health = 100;
        shield = 50;
    }

    void takeDamage(int amount)
    {
        if (shield >= amount)
        {
            shield = shield - amount;
        }
        else
        {
            amount = amount - shield;
            shield = 0;
            health = health - amount;
        }

        if (health < 0)
            health = 0;

        cout << name << ": здоров'я = " << health;
        cout << ", броня = " << shield << endl;
    }
};

class Recon : public Character
{
public:
    Recon(string n) : Character(n)
    {
    }

    void scanArea()
    {
        cout << name << " сканує місцевість: виявлено 2 ворогів!" << endl;
    }
};

class Support : public Character
{
public:
    Support(string n) : Character(n)
    {
    }

    void dropHeal()
    {
        cout << name << " скинув аптечку для відновлення здоров'я союзників!" << endl;
    }
};

int main()
{
    Recon player1("Recon");
    Support player2("Support");

    cout << "Початкова шкода: " << endl;

    player1.takeDamage(70);
    player2.takeDamage(30);

    cout << endl;

    player1.scanArea();
    player2.dropHeal();

    return 0;
}
