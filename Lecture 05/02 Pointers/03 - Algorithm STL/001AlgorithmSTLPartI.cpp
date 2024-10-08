#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {50, 40, 40, 30, 30, 30, 20, 10, 10};
	int n = sizeof(arr) / sizeof(int);

	// 1. sorting a sequence using built-in sort() in O(nlogn) // introsort used

	// sort(begin, end); // [begin, end)

	sort(arr, arr + n); // [0, n) i.e. [0, n-1]

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	// 2. reversing a sequence using the built-in reverse()

	reverse(arr, arr + n); // [0, n) i.e. [0, n-1]

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;


	// 3. reversing a sequence in-range using the built-in reverse()

	reverse(arr + 1, arr + 6); // [0, 6) i.e. [0, 5]

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;


	return 0;
}
