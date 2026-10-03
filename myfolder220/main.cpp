#include <iostream>
#include <cstring>
#include "Book.h"
using namespace std;

int main()
{
    Book books[] = {
        Book("George Orwell", "1984", "Penguin", 1949, 10, 328),
        Book("J.K. Rowling", "Harry Potter", "Bloomsbury", 1997, 15, 350),
        Book("George Orwell", "Animal Farm", "Penguin", 1945, 8, 112),
        Book("Stephen King", "It", "Viking", 1986, 12, 1138),
        Book("J.K. Rowling", "Fantastic Beasts", "Bloomsbury", 2001, 7, 128)
    };

    int n = sizeof(books) / sizeof(books[0]);

    char author[100];
    char publisher[100];
    int year;

    cout << "введіть автора: ";
    cin.getline(author, 100);

    cout << "\n книгу задоно автора\n";

    for (int i = 0; i < n; i++)
    {
        if (strcmp(books[i].getAuthor(), author) == 0)
        {
            books[i].show();
            cout << endl;
        }
    }

    cout << "введіть видавництво: ";
    cin.getline(publisher, 100);

    cout << "\n книгу задного видавнитства:\n";

    for (int i = 0; i < n; i++)
    {
        if (strcmp(books[i].getPublisher(), publisher) == 0)
        {
            books[i].show();
            cout << endl;
        }
    }

    cout << "уведіть рік: ";
    cin >> year;

    cout << "\n книги видані після заданого року:\n";

    for (int i = 0; i < n; i++)
    {
        if (books[i].getYear() > year)
        {
            books[i].show();
            cout << endl;
        }
    }

    return 0;
}