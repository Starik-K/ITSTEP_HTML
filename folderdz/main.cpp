#include <iostream>
#include <fstream>
#include "Reservoir.h"
using namespace std;

int main()
{
    Reservoir* arr = new Reservoir[2];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Dodaty vodoimu" << endl;
        cout << "2. Vydalyty vodoimu" << endl;
        cout << "3. Pokazaty vsi vodoimy" << endl;
        cout << "4. Porivnyaty ploshchu" << endl;
        cout << "5. Skopiyuvaty obiekt" << endl;
        cout << "6. Zberehty u tekstovyi fail" << endl;
        cout << "7. Zberehty u binarnyi fail" << endl;
        cout << "0. Vykhid" << endl;
        cout << "Vybir: ";
        cin >> choice;

        if (choice == 1)
        {
            char name[100], type[100];
            double w, l, d;

            cout << "Nazva: ";
            cin >> name;

            cout << "Typ (more, ozero, basein, stavok): ";
            cin >> type;

            cout << "Shyryna: ";
            cin >> w;

            cout << "Dovzhyna: ";
            cin >> l;

            cout << "Hlybyna: ";
            cin >> d;

            Reservoir* temp = new Reservoir[count + 1];

            for (int i = 0; i < count; i++)
                temp[i].copyFrom(arr[i]);

            temp[count].setName(name);
            temp[count].setType(type);
            temp[count].setSize(w, l, d);

            delete[] arr;
            arr = temp;
            count++;
        }

        else if (choice == 2)
        {
            int index;
            cout << "Vvedit nomer: ";
            cin >> index;

            if (index >= 1 && index <= count)
            {
                for (int i = index - 1; i < count - 1; i++)
                    arr[i].copyFrom(arr[i + 1]);

                count--;
                cout << "Vydaleno!" << endl;
            }
            else
                cout << "Pomylka!" << endl;
        }

        else if (choice == 3)
        {
            for (int i = 0; i < count; i++)
            {
                cout << "\nVodoima #" << i + 1 << endl;
                arr[i].show();
            }
        }

        else if (choice == 4)
        {
            int a, b;
            cout << "Nomer pershoi vodoimy: ";
            cin >> a;
            cout << "Nomer druhoi vodoimy: ";
            cin >> b;

            if (a >= 1 && a <= count && b >= 1 && b <= count)
            {
                if (arr[a - 1].isSameType(arr[b - 1]))
                {
                    if (arr[a - 1].compareArea(arr[b - 1]))
                        cout << "Persha vodoima bilsha." << endl;
                    else if (arr[a - 1].getArea() < arr[b - 1].getArea())
                        cout << "Druha vodoima bilsha." << endl;
                    else
                        cout << "Ploshchi odnakovi." << endl;
                }
                else
                    cout << "Vodoimy riznogo typu!" << endl;
            }
            else
                cout << "Pomylka!" << endl;
        }

        else if (choice == 5)
        {
            int a, b;
            cout << "Zvidky kopiyuvaty: ";
            cin >> a;
            cout << "Kudy kopiyuvaty: ";
            cin >> b;

            if (a >= 1 && a <= count && b >= 1 && b <= count)
            {
                arr[b - 1].copyFrom(arr[a - 1]);
                cout << "Skopiyovano!" << endl;
            }
            else
                cout << "Pomylka!" << endl;
        }

        else if (choice == 6)
        {
            ofstream file("reservoirs.txt");

            for (int i = 0; i < count; i++)
                arr[i].saveText(file);

            file.close();
            cout << "Zapisano u tekstovyi fail!" << endl;
        }

        else if (choice == 7)
        {
            ofstream file("reservoirs.dat", ios::binary);

            for (int i = 0; i < count; i++)
                arr[i].saveBinary(file);

            file.close();
            cout << "Zapisano u binarnyi fail!" << endl;
        }

    } while (choice != 0);

    delete[] arr;

    return 0;
}
