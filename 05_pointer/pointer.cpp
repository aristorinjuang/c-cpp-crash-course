#include <iostream>

using namespace std;

int main() {
	string name = "John Doe";
	string *pointer = &name;

	*pointer = "John Cena";

	cout << name << endl; // John Cena

	// string* p1, p2;
	// p2 = &name;

	return 0;
}