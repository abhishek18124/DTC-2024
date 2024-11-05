#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> f(int A[], int n) {

	vector<int> ans;
	stack<pair<int, int>> s; // monotonic stack // <val, index>

	for (int i = 0; i <= n - 1; i++) {

		// find the index of the nearest greater element to the left of A[i] using the monotonic stack

		while (!s.empty() and s.top().first <= A[i]) {
			s.pop();
		}

		int j;

		if (s.empty()) {

			// A[i] doesn't have any greater elements to it left
			j = -1;

		} else {

			j = s.top().second;

		}

		ans.push_back(i - j);
		s.push({A[i], i}); // s.push(make_pair(A[i], i));

	}

	return ans;

}

int main() {

	int A[] = {100, 80, 60, 70, 60, 75, 85};
	int n = sizeof(A) / sizeof(int);

	vector<int> ans = f(A, n);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << endl;

	return 0;
}