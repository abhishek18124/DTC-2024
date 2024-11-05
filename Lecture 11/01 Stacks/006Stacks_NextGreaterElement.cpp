#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

// time : O(n)
// space: O(n)

vector<int> f(int A[], int n) {

	vector<int> ans;
	stack<int> s; // monotonic stack

	for (int i = n - 1; i >= 0; i--) {

		// find the nearest greater element to the right of A[i] using the monotonic stack

		while (!s.empty() and s.top() <= A[i]) {
			// s.top() cannot be the nearest greater element to the right of A[i] so we can safely pop them
			s.pop();
		}

		if (s.empty()) {
			// A[i] doesn't have any greater elements to its right
			ans.push_back(-1);
		} else {
			// s.top() is the nearest greater element to the right of A[i]
			ans.push_back(s.top());
		}

		s.push(A[i]); // since A[i] can be potential ans for future elements

	}

	reverse(ans.begin(), ans.end());

	return ans;

}

int main() {

	int A[] = {5, 3, 6, 7, 2, 1, 4};
	int n = sizeof(A) / sizeof(int);

	vector<int> ans = f(A, n);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << endl;

	return 0;
}