#include<iostream>

using namespace std;

int main() {

	// int arr[] = {10, 20, 30, 40, 50};

	// cout << arr << " " << &arr[0] << " " << *arr << " " << arr[0] << endl;
	// cout << (arr + 1) << " " << &arr[1] << " " << *(arr + 1) << " " << arr[1] << endl;
	// cout << (arr + 2) << " " << &arr[2] << " " << *(arr + 2) << " " << arr[2] << endl;
	// cout << (arr + 3) << " " << &arr[3] << " " << *(arr + 3) << " " << arr[3] << endl;
	// cout << (arr + 4) << " " << &arr[4] << " " << *(arr + 4) << " " << arr[4] << endl;

	// allocate memory for a 1D array on the heap memory

	int* ptr = new int[5];

	// access elements of the 1D array

	// *ptr = 10;
	// *(ptr + 1) = 20;
	// *(ptr + 2) = 30;
	// *(ptr + 3) = 40;
	// *(ptr + 4) = 50;

	ptr[0] = 10;
	ptr[1] = 20;
	ptr[2] = 30;
	ptr[3] = 40;
	ptr[4] = 50;

	// cout << *ptr << " ";
	// cout << *(ptr + 1) << " ";
	// cout << *(ptr + 2) << " ";
	// cout << *(ptr + 3) << " ";
	// cout << *(ptr + 4) << " ";

	cout << ptr[0] << " ";
	cout << ptr[1] << " ";
	cout << ptr[2] << " ";
	cout << ptr[3] << " ";
	cout << ptr[4] << " ";

	// deallocate memory for 1D array

	delete [] ptr;

	return 0;
}