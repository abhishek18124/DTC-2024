#include<iostream>

using namespace std;

void f(int n) {

	// base case

	if (n == 0) {

		// print nos. from 1 to 0

		return;

	}

	// recursive case

	// print nos. from 1 to n

	// 1. ask your friend to print nos. from 1 to n-1

	f(n - 1);

	cout << n << " ";

}

int main() {

	int n = 10;

	f(n);

	return 0;
}