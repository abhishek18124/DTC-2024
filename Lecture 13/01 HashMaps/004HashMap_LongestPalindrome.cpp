#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int longestPalindromeLength(string str) {

	int cnt = 0;
	unordered_set<int> us;

	for (char ch : str) {

		if (us.find(ch) != us.end()) {

			// ch was seen previously

			cnt += 2;
			us.erase(ch);

		} else {

			us.insert(ch);

		}

	}

	if (us.size() > 0) cnt++;

	return cnt;


}

int main() {

	string str = "abccccdd";

	cout << longestPalindromeLength(str) << endl;

	return 0;
}