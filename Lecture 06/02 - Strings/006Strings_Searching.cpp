#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "abcabcacab";

	cout << s.find("cab") << endl;
	cout << s.rfind("cab") << endl;
	cout << s.find("xyz") << endl;
	cout << string::npos << endl;

	return 0;
}