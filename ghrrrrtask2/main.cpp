#include "Employer.h"

int main()
{
    Employer* employer = nullptr;

    int choice;

    cout << "Choose employer:" << endl;
    cout << "1. President" << endl;
    cout << "2. Manager" << endl;
    cout << "3. Worker" << endl;
    cout << "Your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        employer = new President();
        break;

    case 2:
        employer = new Manager();
        break;

    case 3:
        employer = new Worker();
        break;

    default:
        cout << "Wrong choice!" << endl;
        return 0;
    }

    employer->Print();

    delete employer;

    return 0;
}