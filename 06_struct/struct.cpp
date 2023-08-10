#include <iostream>

using namespace std;

struct person {
	string name;
	int age;
};

int main() {
	person p1;

	p1.name = "John Doe";
	p1.age = 1e1;

	person p2 = {"", 999};
	
	p1.age += 8;

	cout << p1.name << " " << p1.age << endl; // John Doe 18
	cout << p2.name << " is " << p2.age << " years old." << endl; //  is 999 years old.

	return 0;
}