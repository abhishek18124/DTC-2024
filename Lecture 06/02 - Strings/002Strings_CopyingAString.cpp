#include<iostream>
#include<string>

using namespace std;

int main() {

	string s1 = "hello";

	string s2(s1); // create s2 as a copy of s1 (copy constructor)
	string s3 = s1; // creates s3 as a copy s1 (copy constructor)

	string s4;
	s4 = s1; // assigns s1 to s4 (i.e. creates s4 as a copy of s1) (copy assignment operator)

	cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl;

	return 0;
}