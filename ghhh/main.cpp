#include "Animal.h"

int main()
{
    Animal* animal = nullptr;

    int choice;
    string name;
    string characteristic;

    cout << "Choose animal:" << endl;
    cout << "1. Dog" << endl;
    cout << "2. Cat" << endl;
    cout << "3. Parrot" << endl;
    cout << "4. Hamster" << endl;
    cout << "Your choice: ";
    cin >> choice;

    cout << "Enter name: ";
    cin >> name;

    switch (choice)
    {
    case 1:
        cout << "Enter breed: ";
        cin >> characteristic;
        animal = new Dog(name, characteristic);
        break;

    case 2:
        cout << "Enter breed: ";
        cin >> characteristic;
        animal = new Cat(name, characteristic);
        break;

    case 3:
        cout << "Enter color: ";
        cin >> characteristic;
        animal = new Parrot(name, characteristic);
        break;

    case 4:
        cout << "Enter kind: ";
        cin >> characteristic;
        animal = new Hamster(name, characteristic);
        break;

    default:
        cout << "Wrong choice!" << endl;
        return 0;
    }

    cout << endl;

    animal->Show();
    animal->Type();
    animal->Sound();

    delete animal;

    return 0;
}