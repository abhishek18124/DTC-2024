#include<iostream>

using namespace std;

void greet() {
	cout << "namaste" << endl;
}

int add(int a, int b) {
	return a + b;
}

bool ascending(int a, int b) {
	return a > b; // return true if a > b otherwise return false
}

int main() {

	// cout << (void*)&greet << " " << (void*)greet << endl;
	// cout << (void*)&add << " " << (void*)add << endl;
	// cout << (void*)&ascending << " " << (void*)ascending << endl;

	// // void (*gptr)() = &greet;
	// // int (*aptr)(int, int) = &add;
	// // bool (*ascptr)(int, int) = &ascending;

	// '&' is optional while extracting address of a fn

	void (*gptr)() = greet;
	int (*aptr)(int, int) = add;
	bool (*ascptr)(int, int) = ascending;

	greet();
	(*gptr)();
	gptr();
	(*greet)();

	return 0;
}