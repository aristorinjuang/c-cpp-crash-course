#include <iostream>

using namespace std;

int main() {
	int a = 0, b = 1, c = 2;

	float pi = 3.141592653589793;
	const double real_pi = 3.141592653589793;

	cout << pi << " " << sizeof(pi) << endl; // 3.14159 4
	cout << real_pi << " " << sizeof(real_pi) << endl; // 3.14159 8

	char hello[] = "Hello";
	string world = "World";
	char exclamation = 33;

	cout << hello << " " << world << exclamation << endl; // Hello World!

	return 0;
}