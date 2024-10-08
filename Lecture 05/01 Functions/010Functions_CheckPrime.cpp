#include<iostream>
#include<cmath>

using namespace std;

// i = 1 to <=n => n
// i = 2 to <=n => n-1
// i = 2 to <=n-1 => n-2

// time : O(n)

bool isPrime(int n) {

	for (int i = 2; i <= n - 1; i++) { // in the worst case (when n is prime), the loop will run n-2 times // ~ n times

		// check if i is a factor of n

		if (n % i == 0) { // const time operation since it is independent of i/p size

			// you've found a factor of n in the range 2 to n-1 therefore n is not prime

			return false;

		}

	}

	// no factors in the range of 2 to n-1 were found for n therefore n is prime

	return true;

}

// time : O(sqrt(n))

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

int main() {

	int n;
	cin >> n;

	isPrime(n) ? cout << "prime" << endl : cout << "not prime" << endl;
	isPrimeOptimised(n) ? cout << "prime" << endl : cout << "not prime" << endl;

	return 0;
}