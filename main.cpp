#include "Figure.h"

int main()
{
    Figure* figure = nullptr;
    int choice;

    cout << "Choose figure:" << endl;
    cout << "1 - Rectangle" << endl;
    cout << "2 - Circle" << endl;
    cout << "3 - Triangle" << endl;
    cout << "Your choice: ";
    cin >> choice;

    double width, height, radius, base;

    switch (choice)
    {
    case 1:
        cout << "Enter width: ";
        cin >> width;

        cout << "Enter height: ";
        cin >> height;

        figure = new Rectangle(width, height);
        break;

    case 2:
        cout << "Enter radius: ";
        cin >> radius;

        figure = new Circle(radius);
        break;

    case 3:
        cout << "Enter base: ";
        cin >> base;

        cout << "Enter height: ";
        cin >> height;

        figure = new Triangle(base, height);
        break;

    default:
        cout << "Invalid choice" << endl;
        return 0;
    }

    cout << "Area: " << figure->GetArea() << endl;

    delete figure;

    return 0;
}