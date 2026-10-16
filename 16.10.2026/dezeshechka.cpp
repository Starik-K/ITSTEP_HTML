//#1 zad
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string text;
//    string word;
//
//    cout << "Введіть текст - ";
//    getline(cin, text);
//
//    cout << "Введіть слово для пошуку - ";
//    cin >> word;
//
//    int count = 0;
//    size_t position = 0;
//
//    while ((position = text.find(word, position)) != string::npos)
//    {
//        count++;
//        position += word.length();
//    }
//
//    cout << "Кількість входжень: " << count << endl;
//
//    return 0;
//}


//#2 zad
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string text;
//    string word;
//
//    cout << "Введіть текст: ";
//    getline(cin, text);
//
//    cout << "Введіть слово для пошуку: ";
//    cin >> word;
//
//    int count = 0;
//    size_t position = 0;
//
//    while ((position = text.find(word, position)) != string::npos)
//    {
//        count++;
//        position += word.length();
//    }
//
//    cout << "Кількість входжень: " << count << endl;
//
//    return 0;
//}