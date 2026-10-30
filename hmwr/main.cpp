#include "Audio.h"

int main()
{
    Audio* audio = nullptr;
    int choice;

    cout << "Choose audio type:" << endl;
    cout << "1 - Song" << endl;
    cout << "2 - Podcast" << endl;
    cout << "3 - Audiobook" << endl;
    cout << "Your choice: ";
    cin >> choice;

    cin.ignore();

    string title, artist;
    string host, topic;
    string bookTitle, author, voice;

    switch (choice)
    {
    case 1:
        cout << "Enter song title: ";
        getline(cin, title);

        cout << "Enter artist: ";
        getline(cin, artist);

        audio = new Song(title, artist);
        break;

    case 2:
        cout << "Enter host: ";
        getline(cin, host);

        cout << "Enter topic: ";
        getline(cin, topic);

        audio = new Podcast(host, topic);
        break;

    case 3:
        cout << "Enter book title: ";
        getline(cin, bookTitle);

        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter voice: ";
        getline(cin, voice);

        audio = new Audiobook(bookTitle, author, voice);
        break;

    default:
        cout << "Invalid choice!" << endl;
        return 0;
    }

    cout << endl;
    audio->Play();

    delete audio;

    return 0;
}