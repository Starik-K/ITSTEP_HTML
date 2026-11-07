#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Matrix
{
private:
    int** arr;
    int rows;
    int cols;

public:
    Matrix(int r, int c)
    {
        rows = r;
        cols = c;

        arr = new int* [rows];

        for (int i = 0; i < rows; i++)
        {
            arr[i] = new int[cols];

            for (int j = 0; j < cols; j++)
            {
                arr[i][j] = rand() % 100;
            }
        }
    }
    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] arr[i];
        }

        delete[] arr;
    }
    friend istream& operator>>(istream& in, Matrix& m)
    {
        for (int i = 0; i < m.rows; i++)
        {
            for (int j = 0; j < m.cols; j++)
            {
                in >> m.arr[i][j];
            }
        }

        return in;
    }
    friend ostream& operator<<(ostream& out, const Matrix& m)
    {
        for (int i = 0; i < m.rows; i++)
        {
            for (int j = 0; j < m.cols; j++)
            {
                out << m.arr[i][j] << "\t";
            }

            out << endl;
        }

        return out;
    }
};

int main()
{
    srand(time(0));

    int r, c;

    cout << "Введіть кількість рядків: ";
    cin >> r;

    cout << "Введіть кількість стовпців: ";
    cin >> c;

    Matrix m(r, c);

    cout << "\nВипадкова матриця:\n";
    cout << m;
    cout << "\nВведіть нові елементи матриці:\n";
    cin >> m;

    cout << "\nВаша матриця:\n";
    cout << m;
    ofstream out("matrix.txt");

    if (out.is_open())
    {
        out << m;
        out.close();

        cout << "\nМатрицю записано у файл!" << endl;
    }
    ifstream in("matrix.txt");

    if (in.is_open())
    {
        in >> m;
        in.close();

        cout << "\nМатриця з файлу:\n";
        cout << m;
    }

    return 0;
}