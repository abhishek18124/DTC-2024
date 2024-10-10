#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

// return true if you want a to be ordered before b otherwise return false

bool cmp(char a, char b) {

	if (a > b) {

		return true; // since we are sorting in dec. order

	}

	return false;

}

int main() {

	string s1 = "xaybz";

	sort(s1.begin(), s1.end()); // sorts in inc. order by default

	cout << s1 << endl;

	string s2 = "avcxbz";

	// sort(s2.rbegin(), s2.rend());
	// sort(s2.begin(), s2.end(), greater<char>());
	sort(s2.begin(), s2.end(), cmp);

	cout << s2 << endl;

	return 0;
}