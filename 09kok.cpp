#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    srand(time(0));

    int choice;

    do
    {
        cout << "\n=-=====-= TAYNI KOD =-=====-=" << endl;
        cout << "1. Почати гру" << endl;
        cout << "2. Історія ігор" << endl;
        cout << "0. Вийти" << endl;
        cout << "Ваш вибір: ";
        cin >> choice;

        if (choice == 1)
        {
            int secret = rand() % 500 + 1;
            int num;
            int attempts = 0;

            cout << "\nКомп'ютер загадав секретне число!" << endl;
            cout << "Спробуйте знайти його від 1 до 500." << endl;

            do
            {
                cout << "\nВаше число: ";
                cin >> num;

                attempts++;

                if (num < secret)
                    cout << "Потрібно більше!";
                else if (num > secret)
                    cout << "Потрібно менше!";
                else
                {
                    cout << "\nВітаю! Ви розкрили таємний код!" << endl;
                    cout << "Використано спроб: " << attempts << endl;
                }

            } while (num != secret);
            ofstream out("history.txt", ios::app);

            if (out.is_open())
            {
                out << "Спроб: " << attempts
                    << " | Число: " << secret << endl;

                out.close();
            }
        }

        else if (choice == 2)
        {
            ifstream in("history.txt");

            if (in.is_open())
            {
                string line;

                cout << "\n===== ІСТОРІЯ ІГОР =====" << endl;

                while (getline(in, line))
                {
                    cout << line << endl;
                }

                in.close();
            }
            else
            {
                cout << "\nІсторія поки порожня!" << endl;
            }
        }

    } while (choice != 0);

    cout << "\nДякую за гру! До зустрічі!" << endl;

    return 0;
}