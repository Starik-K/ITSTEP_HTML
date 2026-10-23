
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(const string& expression)
{
    stack<char> d;

    for (int i = 0; i < expression.length(); i++)
    {
        char c = expression[i];

        if (c == '(' || c == '[' || c == '{')
        {
            d.push(c);
        }
        else if (c == ')' || c == ']' || c == '}')
        {
            if (d.empty())
                return false;

            char top = d.top();

            if (c == ')' && top != '(')
                return false;

            if (c == ']' && top != '[')
                return false;

            if (c == '}' && top != '{')
                return false;

            d.pop();
        }
    }

    return d.empty();
}

int main()
{
    string expression;

    while (true)
    {
        cout << "Vvedit ryadok (exit - vyhid): ";
        getline(cin, expression);

        if (expression == "exit")
            break;

        if (isValid(expression))
            cout << "Korektno" << endl;
        else
            cout << "Pomylka" << endl;
    }

    return 0;
}
