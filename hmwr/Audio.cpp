#include "Audio.h"

Song::Song(string t, string a)
{
    title = t;
    artist = a;
}

void Song::Play()
{
    cout << "Playing song: " << title << " by " << artist << endl;
}

Podcast::Podcast(string h, string t)
{
    host = h;
    topic = t;
}

void Podcast::Play()
{
    cout << "Podcast on " << topic << " hosted by " << host << endl;
}

Audiobook::Audiobook(string b, string a, string v)
{
    bookTitle = b;
    author = a;
    voice = v;
}

void Audiobook::Play()
{
    cout << "Listening to audiobook: " << bookTitle
        << " by " << author << ". Read by " << voice << "." << endl;
}