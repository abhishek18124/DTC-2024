/*

Given a string (sequence of characters) of length n, generate all of its permutations.

Example

	Input : inp[] = "abc"
	Output: ["abc", "acb", "bac", "bca", "cba", "cab"]


constraints : n <= 10

*/

#include<iostream>
#include<cstring>

using namespace std;

void f(int n, char inp[], char out[], int usedMap[], int i) {

	// base case

	if (i == n) {
		out[i] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case

	// decide for ith position in the out[]

	for (int j = 0; j < n; j++) {

		// is the jth option i.e. inp[j] valid ?

		if (usedMap[j] == false) {

			// inp[j] is not yet used, so we can choose the jth option for the ith position of the out[]

			out[i] = inp[j];
			usedMap[j] = 1;
			f(n, inp, out, usedMap, i + 1);
			usedMap[j] = 0; // backtracking

		}

	}

}

int main() {

	char inp[] = "abc";
	int n = strlen(inp);

	char out[11]; // based on constraints

	int usedMap[10] = {0}; // based on constraints, init with 0 i.e. false

	f(n, inp, out, usedMap, 0);

	return 0;
}
