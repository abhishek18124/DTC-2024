#include<iostream>
#include<string>

using namespace std;

bool isGoodString(string str) {

	for (int i = 0; i < str.size(); i++) {

		char ch = str[i];

		if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {

			// ch is a consonant i.e. not a vowel

			// str is not a good string

			return false;

		}

	}

	// str is a good string

	return true;

}

int main() {

	string str = "uoiea";

	isGoodString(str) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}