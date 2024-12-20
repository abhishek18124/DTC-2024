/*

given a non-negative number n, find the nth fibonacci no.

Example :
	Input : n = 7
	Output : 13

*/

#include<iostream>
#include<vector>

using namespace std;

int cnt1 = 0;

int f(int n) {

	cnt1++;

	// base case

	if (n == 0 || n == 1) {

		// f(0) : find the 0th fibonacci no.

		// f(1) : find the 1st fibonacci no.

		return n;

	}

	// recursive case

	// f(n) : find the nth fibonacci no.

	return f(n - 1) + f(n - 2);
}

int cnt2 = 0;


// time : O(n)
// space: n + n ~ O(n) due to dp[] and function call stack

int fTopDown(int n, vector<int>& dp) {

	cnt2++;

	// lookup

	if (dp[n] != -1) {
		// you've already solve f(n)
		return dp[n];
	}

	// base case

	if (n == 0 || n == 1) {

		// f(0) : find the 0th fibonacci no.

		// f(1) : find the 1st fibonacci no.

		return dp[n] = n;

	}

	// recursive case

	// f(n) : find the nth fibonacci no.

	return dp[n] = fTopDown(n - 1, dp) + fTopDown(n - 2, dp);
}

// time : O(n)
// space: O(n) due to dp[]

int fBottomUp(int n) {

	vector<int> dp(n + 1);

	dp[0] = 0; // at the 0th index of dp[] we store f(0)
	dp[1] = 1; // at the 1st index of dp[] we store f(1)

	for (int i = 2; i <= n; i++) {
		// dp[i] = f(i) = ith fib. no.
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n]; // at the nth index of dp[] we store f(n)

}

// time : O(n)
// space: O(1)

int fBottomUpSpaceOptimised(int n) {

	if (n == 0 || n == 1) {
		return n;
	}

	// n >= 2

	int a = 0; // 0th fib. no.
	int b = 1; // 1st fib. no.

	for (int i = 2; i <= n; i++) {

		int c = a + b;
		a = b;
		b = c;

	}

	return b; // since b is eventually c which is the nth fib. no.

}

int main() {

	int n = 25;

	cout << f(n) << endl;

	cout << cnt1 << endl;

	vector<int> dp(n + 1, -1);

	cout << fTopDown(n, dp) << endl;

	cout << cnt2 << endl;

	cout << fBottomUp(n) << endl;

	cout << fBottomUpSpaceOptimised(n) << endl;

	return 0;
}