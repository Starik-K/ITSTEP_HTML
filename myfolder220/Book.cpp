#include "Book.h"
#include <cstring>

Book::Book()
{
    strcpy(author, "Unknown");
    strcpy(title, "Unknown");
    strcpy(publisher, "Unknown");
    year = 0;
    quantity = 0;
    pages = 0;
}

Book::Book(const char* a, const char* t, const char* p, int y, int q, int pg)
{
    strcpy(author, a);
    strcpy(title, t);
    strcpy(publisher, p);
    year = y;
    quantity = q;
    pages = pg;
}

void Book::show() const
{
    cout << "автор: " << author << endl;
    cout << "назва: " << title << endl;
    cout << "видавнитство: " << publisher << endl;
    cout << "рік: " << year << endl;
    cout << "кількість: " << quantity << endl;
    cout << "сторінку: " << pages << endl;
}

const char* Book::getAuthor() const
{
    return author;
}

const char* Book::getPublisher() const
{
    return publisher;
}

int Book::getYear() const
{
    return year;
}