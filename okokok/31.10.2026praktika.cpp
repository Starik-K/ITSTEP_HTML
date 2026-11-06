//#include <iostream>
//#include <string>
//#include <stdexcept>
//using namespace std;
//
//int toInt(const string& sss) {
//	try
//	{
//		size_t p;
//		int n = stoi(sss, &p);
//
//		if (p != sss.length())
//			throw invalid_argument("pomilka");
//		return n;
//	}
//	catch (...)
//	{
//		throw invalid_argument("ce ne chislo");
//	}
//
//}
//int main() {
//	string sss;
//	cin >> sss;
//	try {
//		cout << toInt(sss);
//	}
//	catch (invalid_argument& e) {
//		cout << e.what();
//	}
//	return 0;
//}
//secondone
//#include <iostream>
//#include <string>
//#include <stdexcept>
//using namespace std;
//
//void check(string sss) {
//	if (sss.length() < 8)
//		throw invalid_argument("nevistachae symvoliv!");
//
//	bool num = false;
//	for (char c : sss) {
//		if (isdigit(c))
//			num = true;
//	}
//	if (!num)
//		throw invalid_argument("nemae ciferki!");
//
//}
//int main() {
//	string sss;
//
//	cin >> sss;
//	try {
//		check(sss);
//		cout << "right password";
//	}
//	catch (invalid_argument& e)
//	{
//		cout << e.what();
//
//	}
//	return 0;
//}
//
//#include <iostream>
//#include <string>
//#include <stdexcept>
//using namespace std;
//
//class AgeException : public exception {
//public:
//	AgeException(int aaa) {
//
//	}
//	const char* what() const noexcept override {
//		return "uxadi, tebe nute 18 let!";
//	}
//};
//
//void vote(string sss, int aaa) {
//	if (aaa < 18)
//		throw AgeException(aaa);
//
//	cout << "vi golosuete za" << sss;
//
//}
//
//int main() {
//	string sss;
//	int aaa;
//	cin >> sss >> aaa;
//
//	try {
//		vote(sss, aaa);
//	}
//	catch (AgeException& e) {
//		cout << e.what();
//	}
//	return 0;
//}