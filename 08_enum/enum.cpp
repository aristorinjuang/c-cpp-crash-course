#include <iostream>

using namespace std;

enum Color {
	RED,
	GREEN,
	BLUE
};

int main() {
	int number;
	cout << "Input a number between 0-2: ";
	cin >> number;

	Color color = static_cast<Color>(number);

	switch (color) {
		case RED:
			cout << "Red" << endl;
			break;
		case GREEN:
			cout << "Green" << endl;
			break;
		case BLUE:
			cout << "Blue" << endl;
			break;
		default:
			cout << "Undefined" << endl;
	}

	return 0;
}