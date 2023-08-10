#include <iostream>
#include <map>
#include <set>

using namespace std;

struct location {
	float latitude, longitude;
};

int main() {
	map<string, location> offices;

	location apple = {37.33199, -122.03089};
	location google = {37.42202, -122.08408};

	offices["Apple"] = apple;
	offices["Google"] = google;

	set<int> uniqueNumbers;

	uniqueNumbers.insert(1);
	uniqueNumbers.insert(2);
	uniqueNumbers.insert(3);

	for (auto num : uniqueNumbers) {
		cout << num << endl;
	}

	cout << uniqueNumbers.count(4) << endl; // 0
	
	return 0;
}