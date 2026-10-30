#include "HackSystem.h"

VendingMachine::VendingMachine()
{
    hacked = false;
}

void VendingMachine::applyHack(int techLevel)
{
    if (techLevel >= 2)
    {
        hacked = true;
        cout << "Vending machine hacked!" << endl;
        cout << "All drinks are coming out!" << endl;
    }
    else
    {
        cout << "Electric shock! Hack failed!" << endl;
    }
}

bool VendingMachine::isHacked() const
{
    return hacked;
}

SmartDoor::SmartDoor()
{
    hacked = false;
}

void SmartDoor::applyHack(int techLevel)
{
    if (techLevel >= 5)
    {
        hacked = true;
        cout << "Smart door opened!" << endl;
    }
    else
    {
        cout << "Access denied! Door is locked!" << endl;
    }
}

bool SmartDoor::isHacked() const
{
    return hacked;
}

CyberEnemy::CyberEnemy(int h)
{
    health = h;
}

CyborgGuard::CyborgGuard(int h) : CyberEnemy(h)
{
    frozen = false;
}

void CyborgGuard::attack()
{
    if (frozen)
    {
        cout << "Cyborg is frozen and cannot attack!" << endl;
    }
    else
    {
        cout << "Cyborg attacks the player!" << endl;
    }
}

void CyborgGuard::applyHack(int techLevel)
{
    if (techLevel >= 7)
    {
        frozen = true;
        cout << "Cyborg is frozen!" << endl;
    }
    else
    {
        health -= 20;

        if (health < 0)
            health = 0;

        cout << "Hack failed to freeze the Cyborg!" << endl;
        cout << "Cyborg received 20 damage." << endl;
        cout << "Health: " << health << endl;
    }
}

bool CyborgGuard::isHacked() const
{
    return frozen;
}

AutoTurret::AutoTurret(int h) : CyberEnemy(h)
{
    hacked = false;
}

void AutoTurret::attack()
{
    if (hacked)
    {
        cout << "Turret attacks other enemies!" << endl;
    }
    else
    {
        cout << "Turret attacks the player!" << endl;
    }
}

void AutoTurret::applyHack(int techLevel)
{
    if (techLevel >= 4)
    {
        hacked = true;
        cout << "Turret hacked! Target changed to enemies!" << endl;
    }
    else
    {
        cout << "Turret hack failed!" << endl;
    }
}

bool AutoTurret::isHacked() const
{
    return hacked;
}

Netrunner::Netrunner(int level)
{
    skillLevel = level;
}

void Netrunner::breachProtocol(IHackable& target)
{
    target.applyHack(skillLevel);
}