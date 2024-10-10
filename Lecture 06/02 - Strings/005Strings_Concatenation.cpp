#include<iostream>
#include<string>

using namespace std;

int main() {

	string s1 = "abc";
	string s2 = "def";

	cout << s1 + s2 << endl;
	cout << s1 << endl;
	cout << s2 << endl;

	s1 = s1 + s2;
	cout << s1 << endl;
	cout << s2 << endl;

	string s = "coding";

	cout << s << endl;

	cout << s[0] << " " << s.front() << endl;

	int n = s.size();

	cout << s[n - 1] << " " << s.back() << endl;

	s.push_back('x');

	cout << s << endl;

	s.pop_back();

	cout << s << endl;

	cout << s.empty() << endl;

	s.clear();

	cout << s.empty() << endl;

	cout << (s.size() == 0) << endl;

	cout << (s == "") << endl;

	return 0;
}