#include<iostream>
#include<cmath>

using namespace std;

// adv. of using fns
// 1. readability
// 2. modularity
// 3. reusability

bool isPrimeOptimised(int n) {

	int rn = sqrt(n);

	for (int i = 2; i <= rn; i++) { // in the worst case (when n is prime), the loop will run n-2 times // ~ n times

		// check if i is a factor of n

		if (n % i == 0) { // const time operation since it is independent of i/p size

			// you've found a factor of n in the range 2 to n-1 therefore n is not prime

			return false;

		}

	}

	// no factors in the range of 2 to n-1 were found for n therefore n is prime

	return true;

}


void printPrimes(int m) {

	for (int n = 2; n <= m; n++) {

		// check if n is prime or not

		if (isPrimeOptimised(n)) {
			cout << n << " ";
		}

	}

}

int main() {

	int m;
	cin >> m;

	printPrimes(m);

	return 0;
}