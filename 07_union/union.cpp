#include <iostream>

using namespace std;

union person {
	char initial;
	int age;
};

int main() {
	person p1;

	p1.initial = 'J';
	p1.age = 1e1;

	person p2 = {.age = 999};

	p1.age += 8;

	cout << p1.initial << " " << p1.age << endl; //  18
	cout << p2.initial << " is " << p2.age << " years old." << endl; // � is 999 years old.

	return 0;
}