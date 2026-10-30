#pragma once
#include <iostream>
using namespace std;

class IHackable
{
public:
    virtual void applyHack(int techLevel) = 0;
    virtual bool isHacked() const = 0;
    virtual ~IHackable() {}
};

class VendingMachine : public IHackable
{
private:
    bool hacked;

public:
    VendingMachine();
    void applyHack(int techLevel) override;
    bool isHacked() const override;
};

class SmartDoor : public IHackable
{
private:
    bool hacked;

public:
    SmartDoor();
    void applyHack(int techLevel) override;
    bool isHacked() const override;
};

class CyberEnemy
{
protected:
    int health;

public:
    CyberEnemy(int h);
    virtual void attack() = 0;
    virtual ~CyberEnemy() {}
};

class CyborgGuard : public CyberEnemy, public IHackable
{
private:
    bool frozen;

public:
    CyborgGuard(int h);
    void attack() override;
    void applyHack(int techLevel) override;
    bool isHacked() const override;
};

class AutoTurret : public CyberEnemy, public IHackable
{
private:
    bool hacked;

public:
    AutoTurret(int h);
    void attack() override;
    void applyHack(int techLevel) override;
    bool isHacked() const override;
};

class Netrunner
{
private:
    int skillLevel;

public:
    Netrunner(int level);
    void breachProtocol(IHackable& target);
};