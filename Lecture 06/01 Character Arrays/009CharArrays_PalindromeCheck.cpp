// n <= 100

#include<iostream>
#include<cstring>

using namespace std;

// steps = n/2.const ~ O(n)
// space = O(1) since extra/auxillary space is independent of i/p size

bool isPalindrome(char str[]) {

	int i = 0;
	int j = strlen(str) - 1;

	while (i < j) {

		if (str[i] != str[j]) {
			// str[] is not a palindrome
			return false;
		}

		// str[i] is equal to str[j]
		i++;
		j--;

	}

	// str[] is a palindrome
	return true;

}

int main() {

	char str[101]; // based on constraints
	cin >> str; // assume i/p has no whitespaces

	isPalindrome(str) ? cout << str << " is a palindrome" << endl :
	                         cout << str << " is not a palindrome" << endl;



	if (isPalindrome(str)) {
		cout << str << " is a palindrome" << endl;
	} else {
		cout << str << " is not a palindrome" << endl;
	}

	return 0;
}