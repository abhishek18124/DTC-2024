#include<iostream>
#include<string>

using namespace std;

void generateSubstrings(string str, int n) {

	// iterate over all the possible starting indices for substrings

	for (int i = 0; i <= n - 1; i++) {

		// for every starting index, iterate over all the possible ending indices

		for (int j = i; j <= n - 1; j++) {

			// print the substring that starts at the ith index and ends at the jth index

			// the length of a substring that starts at the ith index and ends at the jth index is j-i+1

			string subString = str.substr(i, j - i + 1);
			cout << subString << endl;

		}

		cout << endl;

	}

}

int main() {

	string str = "abcde";
	int n = str.size();

	generateSubstrings(str, n);

	return 0;
}