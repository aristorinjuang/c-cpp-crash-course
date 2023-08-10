#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> hello;

	hello.assign(1, "Hello");
	hello.push_back("World!");

	for (auto i = hello.begin(); i != hello.end(); i++) {
		cout << *i << " ";
	}

	return 0;
}