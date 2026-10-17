#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {

	map < string, int > words;
	string text, word;

	cout << "введіть текст: ";
	getline(cin, text);
	for (char& c : text) {
		c = tolower((unsigned char)c);
	}

	stringstream ss(text);

	while (ss >> word) {
		while (!word.empty() && ispunct((unsigned char)word.front()))
			word.erase(word.begin());

		while (!word.empty() && ispunct((unsigned char)word.back()))
			word.pop_back();

		if (!word.empty())
			words[word]++;
	}

	cout << "\n ЧАСТОТА СЛІВ: \n";

	for (const auto& item : words)
		cout << item.first << ">" << item.second << endl;


	if (!words.empty()) {
		string mostFreq;
		int maxcount = 0;

		for (const auto& item : words) {
			if (item.second > maxcount) {
				maxcount = item.second;
				mostFreq = item.first;
			}


		}

		cout << "\n найчастіше слово: " << mostFreq << endl;
		cout << "кількість: " << maxcount << endl;
	}
	return 0;

}