#include <iostream>
#include <ctime>

using namespace std;

void isEven(int num) {
	if (num % 2 == 0) {
		cout << num << " is even." << endl;
	} else {
		cout << num << " is odd." << endl;
	}
}

void greetings() {
	time_t now = time(0);
	tm *ltm = localtime(&now);

	switch (ltm->tm_hour) {
		case 1 ... 11:
			cout << "Good morning!" << endl;

			break;
		case 12 ... 16:
			cout << "Good afternoon." << endl;

			break;
		default:
			cout << "Good evening." << endl;
	}
}

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	int sum = 1;
	while (sum < 1000) {
		sum += sum;
	}
	cout << sum << endl;
	
	int num;
	cout << "Put a number: ";
	cin >> num;
	isEven(num);

	greetings();

	return 0;
}