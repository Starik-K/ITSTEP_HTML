#include "Player.h"
using namespace std;
int Player::playersCount = 0;

Player::Player(const char* name, int hp, int lvl)
    : health(hp), level(lvl)
{
    playerName = new char[strlen(name) + 1];
    strcpy(playerName, name);

    playersCount++;
}

Player::Player()
    : Player("Unknown", 100, 1)
{
}

Player::~Player()
{
    delete[] playerName;
    playersCount--;
}

const char* Player::getName() const
{
    return playerName;
}

int Player::getHealth() const
{
    return health;
}

int Player::getLevel() const
{
    return level;
}

void Player::setName(const char* name)
{
    delete[] playerName;

    playerName = new char[strlen(name) + 1];
    strcpy(playerName, name);
}

void Player::setHealth(int hp)
{
    if (hp < 0)
        health = 0;
    else
        health = hp;
}

void Player::takeDamage(int damage)
{
    health -= damage;

    if (health < 0)
        health = 0;
}

void Player::heal(int amount)
{
    health += amount;

    if (health > 100)
        health = 100;
}

void Player::levelUp()
{
    level++;
}

void Player::printStats() const
{
cout << "Player: " << playerName << std::endl;
cout << "Health: " << health << std::endl;
cout << "Level: " << level << std::endl;
cout << "------------------" << std::endl;
}

int Player::getPlayersCount()
{
    return playersCount;
}
