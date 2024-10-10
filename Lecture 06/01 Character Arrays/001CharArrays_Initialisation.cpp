#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = 5;

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	cout << arr << " " << &arr[0] << endl;

	char str[] = {'a', 'b', 'c', 'd', 'e', '\0'};

	cout << str << endl;

	char str2[] = "hello";

	cout << str2 << endl;

	for (int i = 0; str2[i] != '\0'; i++) {
		cout << str2[i] << " ";
	}

	cout << endl;

	return 0;
}