//#1 zadanka
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string email;
//
//    cout << "Введіть електронну пошту - ";
//    getline(cin, email);
//
//    int position = email.find('@');
//
//    if (position != string::npos)
//    {
//        string username = email.substr(0, position);
//        string domain = email.substr(position + 1);
//
//        cout << "Імя користувача: " << username << endl;
//        cout << "Домен: " << domain << endl;
//    }
//    else
//    {
//        cout << "Помилка: неправильна електронна пошта" << endl;
//    }
//
//    return 0;
//}

//#2 zadanka
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string text;
//    string word;
//
//    cout << "Введіть речення: ";
//    getline(cin, text);
//
//    cout << "Введіть заборонене слово: ";
//    getline(cin, word);
//
//    if (!word.empty())
//    {
//        int position = text.find(word);
//
//        while (position != string::npos)
//        {
//            text.replace(position, word.length(), "****");
//            position = text.find(word, position + 4);
//        }
//    }
//
//    text += " [Відредаговано]";
//
//    cout << "Результат: " << text << endl;
//
//    return 0;
//}