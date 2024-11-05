/*

 i/p : a  a  b  c  d  b  c ...
 o/p : a -1  b  b  b  c  d ...

*/

#include<iostream>
#include<queue>

using namespace std;

int main() {

	int freqMap[26] = {0};
	queue<char> q;

	while (true) {

		char ch;
		cin >> ch;

		freqMap[ch - 'a']++;
		if (freqMap[ch - 'a'] == 1) {
			// as of now, ch is non-repeating character
			q.push(ch);
		}

		// now, use the queue to find the first non-repeating char. in the stream once we've read ch

		while (!q.empty() and freqMap[q.front() - 'a'] > 1) {
			// the char. at the front of the queue is no longer non-repeating
			q.pop();
		}

		if (q.empty()) {
			// there is no non-repeating char. in the stream
			cout << -1 << " ";
		} else {
			cout << q.front() << " ";
		}

	}

	return 0;
}