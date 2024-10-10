#include<iostream>
#include<string>

using namespace std;

int main() {

	string str = "coding blocks";
	cout << str << endl;
	cout << str.size() << endl;

	cout << str[0] << endl;
	cout << str[1] << endl;

	for (int i = 0; str[i] != '\0'; i++) {
		cout << str[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < str.size(); i++) {
		cout << str[i] << " ";
	}

	cout << endl;

	return 0;
}