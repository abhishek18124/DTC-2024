// n <= 100

#include<iostream>

using namespace std;

int main() {

	char str[101]; // based on the constraints

	// cin >> str;

	cin.getline(str, 101); // '\n' is the default delimiting char
	// cin.getline(str, 100, '$');
	// cin.getline(str, 5, '$');

	cout << str << endl;

	return 0;
}