#pragma once
#include <iostream>
#include <string>
using namespace std;

class Audio
{
public:
    virtual void Play() = 0;
    virtual ~Audio() {}
};

class Song : public Audio
{
private:
    string title;
    string artist;

public:
    Song(string t, string a);
    void Play() override;
};

class Podcast : public Audio
{
private:
    string host;
    string topic;

public:
    Podcast(string h, string t);
    void Play() override;
};

class Audiobook : public Audio
{
private:
    string bookTitle;
    string author;
    string voice;

public:
    Audiobook(string b, string a, string v);
    void Play() override;
};