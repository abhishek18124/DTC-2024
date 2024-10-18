// constraints : n <= 100

#include<iostream>

using namespace std;

void merge(int arr[], int s, int m, int e) {

	int temp[100]; // based on constraints

	int i = s;
	int j = m + 1;
	int k = s;

	while (i <= m and j <= e) {

		if (arr[i] < arr[j]) {

			temp[k] = arr[i];
			i++;
			k++;

		} else {

			temp[k] = arr[j];
			j++;
			k++;

		}

	}

	while (i <= m) {

		temp[k] = arr[i];
		i++;
		k++;

	}

	while (j <= e) {

		temp[k] = arr[j];
		j++;
		k++;

	}

	// copy temp[s...e] to arr[s...e]

	for (int l = s; l <= e; l++) {
		arr[l] = temp[l];
	}

}

void mergeSort(int arr[], int s, int e) {

	// base case

	if (s == e) {

		// merge sort arr[s...s]

		return; // arr[s...s] is already sorted

	}

	// recursive case

	// 1. divide the arr[s...e] around the midPoint

	int m = (s + e) / 2;

	// 2. recursively sort the two subarrays

	mergeSort(arr, s, m);
	mergeSort(arr, m + 1, e);

	// 3. merge the two sorted subarrays such that the merged array is sorted

	merge(arr, s, m, e);

}

int main() {

	int arr[] = {50, 40, 30, 20, 10};
	int n = sizeof(arr) / sizeof(int);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	mergeSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}