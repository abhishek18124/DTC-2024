#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class customer {

public:

	string name;
	int age;
	char gender;
	double credits;

	customer(string name, int age, char gender, double credits) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->credits = credits;
	}
};

bool cmp(customer a, customer b) {

	if (a.age < b.age) {
		// we want a to be ordered before b since we are sorting based on age in the inc. order
		return true;
	}

	return false;

}

int main() {

	vector<customer> v;

	// customer c1("Ramanujan", 32, 'M', 1729);
	// v.push_back(c1);

	v.push_back(customer("Ramanujan", 32, 'M', 1729));
	v.push_back(customer("JC Bose", 78, 'M', 2500));
	v.push_back(customer("Aryabhata", 74, 'M', 0));
	v.push_back(customer("Vikram", 52, 'M', 1500));
	v.push_back(customer("Homi", 56, 'M', 1000));

	sort(v.begin(), v.end(), cmp); // sort on age in inc. order

	for (customer c : v) {
		cout << c.name << " " << c.age << " " << c.credits << " " << c.gender << endl;
	}

	return 0;
}