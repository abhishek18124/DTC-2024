#include<iostream>
#include<stack>
#include<vector>

using namespace std;

// time : O(n)
// space: O(n)

vector<int> f(int A[], int n) {

	vector<int> ans;
	stack<int> s; // monotonic stack

	for (int i = 0; i <= n - 1; i++) {

		// find the nearest greater element to the left of A[i] using the monotonic stack

		while (!s.empty() and s.top() <= A[i]) {
			// s.top() cannot be the nearest greater element to the left of A[i] so we can safely pop them
			s.pop();
		}

		if (s.empty()) {
			// A[i] doesn't have any greater elements to its left
			ans.push_back(-1);
		} else {
			// s.top() is the nearest greater element to the left of A[i]
			ans.push_back(s.top());
		}

		s.push(A[i]); // since A[i] can be potential ans for future elements

	}

	return ans;

}


int main() {

	int A[] = {5, 2, 0, 4, 1, 3, 6};
	int n = sizeof(A) / sizeof(int);

	vector<int> ans = f(A, n);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << endl;

	return 0;
}