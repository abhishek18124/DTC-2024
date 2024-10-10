#include<iostream>
#include<string>

using namespace std;

int main() {

	string s1 = "abc";
	string s2 = "abc";

	cout << s1.compare(s2) << endl;

	string s3 = "adc";
	string s4 = "z";

	cout << s3.compare(s4) << endl;

	string s5 = "xyz";
	string s6 = "abc";

	cout << s5.compare(s6) << endl;

	// >, >=, <, <=, == , != relational ops work for string type

	if (s5 > s6) {
		cout << s5 << " > " << s6 << endl;
	}

	return 0;
}