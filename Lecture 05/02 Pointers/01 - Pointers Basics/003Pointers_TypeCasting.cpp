#include<iostream>

using namespace std;

int main() {

	int x = 516;
	char *chptr = (char*)&x;

	cout << "*chptr = " << (int)*chptr << endl;


	return 0;
}