#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char s1[] = "abc";
	char s2[] = "abc";

	cout << strcmp(s1, s2) << endl;

	char s3[] = "z";
	char s4[] = "y";

	cout << strcmp(s3, s4) << endl; // s3 > s4

	char s5[] = "w";
	char s6[] = "x";

	cout << strcmp(s5, s6) << endl; // s5 < s6

	char s7[] = "w";
	char s8[] = "z";

	cout << strcmp(s7, s8) << endl; // s5 < s6

	return 0;
}