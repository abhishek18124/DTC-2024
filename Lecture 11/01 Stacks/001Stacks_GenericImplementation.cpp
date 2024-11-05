#include<iostream>
#include<vector>

using namespace std;

template <typename T>
class stack {

	vector<T> v; // internal repr. of the stack

public :

	void push(T val) {
		v.push_back(val);
	}

	void pop() { // if you perform pop on an empty stack it is undefined
		v.pop_back();
	}

	int size() {
		return v.size();
	}

	T top() { // if you perform top op. of an empty stack it is undefined
		return v.back(); // v[v.size()-1]
	}

	bool empty() {
		return v.empty(); // v.size() == 0
	}

};

int main() {

	stack<string> s;

	cout << "size : " << s.size() << endl; // 0
	cout << "isEmpty ? " << s.empty() << endl; // true

	s.push("abc");
	s.push("def");
	s.push("ghi");
	s.push("jkl");
	s.push("mno");

	cout << "size : " << s.size() << endl; // 5
	cout << "top : " << s.top() << endl; // "mno"
	cout << "isEmpty ? " << s.empty() << endl; // false

	s.pop(); // "mno" is popped

	cout << "size : " << s.size() << endl; // 4
	cout << "top : " << s.top() << endl; // "jkl"

	s.pop(); // "jkl" is popped

	cout << "size : " << s.size() << endl; // 3
	cout << "top : " << s.top() << endl; // "ghi"

	s.pop(); // "ghi" is popped

	cout << "size : " << s.size() << endl; // 2
	cout << "top : " << s.top() << endl; // "def"

	s.pop(); // "def" is popped

	cout << "size : " << s.size() << endl; // 1
	cout << "top : " << s.top() << endl; // "abc"

	s.pop(); // "abc" is popped

	cout << "size : " << s.size() << endl; // 0
	cout << "isEmpty ? " << s.empty() << endl; // true

	return 0;
}