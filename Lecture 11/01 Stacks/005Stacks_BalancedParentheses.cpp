#include<iostream>
#include<stack>

using namespace std;

// time : O(n) where n is the length of the string

bool isBalanced(string str) {

	stack<char> s;
	for (char ch : str) {

		switch (ch) {
		case '(': s.push(ch); break;
		case '[': s.push(ch); break;
		case '{': s.push(ch); break;
		case ')': if (!s.empty() and s.top() == '(') s.pop(); else return false; break;
		case ']': if (!s.empty() and s.top() == '[') s.pop(); else return false; break;
		case '}': if (!s.empty() and s.top() == '{') s.pop(); else return false; break;
		}

	}

	return s.empty();

}

int main() {

	string str = "()[]{}";

	isBalanced(str) ? cout << "balanced!" << endl : cout << "not balanced!" << endl;

	return 0;
}