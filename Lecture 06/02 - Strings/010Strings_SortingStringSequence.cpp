#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool cmp(string a, string b) {

	if (a.size() < b.size()) {
		// we want a to come before b since we are sorting in inc. ordere based length
		return true;
	}

	return false;

}

int main() {

	string arr[] = {"abcd", "xy", "z"};
	int n = 3;

	sort(arr, arr + n, cmp);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}