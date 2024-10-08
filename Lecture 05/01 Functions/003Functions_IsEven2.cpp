#include<iostream>

using namespace std;

bool isEven(int n) {

	return n % 2 == 0;

}

int main() {

	bool ans;

	ans = isEven(4);

	cout << ans << endl;

	cout << isEven(5) << endl;

	// if a fn call returns a value, you can treat that fn call as an expression
	// and therefore you can use such a fn call anywhere where you would use an expression

	if (isEven(9)) {
		cout << "even" << endl;
	} else {
		cout << "odd" << endl;
	}

	isEven(10) ? cout << "even" << endl : cout << "odd" << endl;

	return 0;
}