#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

	customer(string n, int a, char g, double c) {
		cout << "\ninside the parameterised constructor of the \'customer\' class\n" << endl;
		name = n;
		age = a;
		gender = g;
		credits = c;
	}

	void print() {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl << endl;
	}

	bool operator>(customer c) {
		return age > c.age;
	}

	int operator+(customer c) {
		return age + c.age;
	}

	int operator*(customer c) {
		return age * c.age;
	}

};

int operator-(customer c1, customer c2) {
	return c1.age - c2.age;
}

int main() {

	customer c1("Ramanujan", 80, 'M', 1729);
	customer c2("Aryabhata", 74, 'M', 0);

	c1 > c2 ? cout << "c1 is older than c2" << endl : cout << "c1 is not older than c2" << endl;
	// c1.operator>(c2)

	cout << c1 + c2 << endl; // c1.operator+(c2)

	cout << c1 - c2 << endl; // operator-(c1, c2)

	cout << c1 * c2 << endl; // c1.operator*(c2)

	return 0;

}