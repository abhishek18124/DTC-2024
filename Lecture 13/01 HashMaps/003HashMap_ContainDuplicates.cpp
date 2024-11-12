#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set> // hastset

using namespace std;

bool checkDuplicate(vector<int> v) {

	unordered_map<int, int> freqMap;

	for (int i = 0; i < v.size(); i++) {

		int x = v[i];
		freqMap[x]++;

		if (freqMap[x] > 1) {
			// you've found a duplicate
			return true;
		}

	}

	// no duplicates found
	return false;

	// for (pair<int, int> p : freqMap) {
	// 	cout << p.first << " " << p.second << endl;
	// }

}

bool checkDuplicateUsingSet(vector<int> v) {

	unordered_set<int> us;

	for (int i = 0; i < v.size(); i++) {
		int x = v[i];
		if (us.find(x) == us.end()) {
			// x is not present in the set
			us.insert(x);
		} else {
			// x is already present in the set therefore we've found a duplicate
			return true;
		}
	}

	// no duplicates found
	return false;

}

int main() {

	vector<int> v = {1, 2, 3};

	checkDuplicate(v) ? cout << "duplicate present" << endl :
	                         cout << "duplicate not present" << endl;

	checkDuplicateUsingSet(v) ? cout << "duplicate present" << endl :
	                                 cout << "duplicate not present" << endl;

	return 0;
}