#include <stdio.h>

struct person {
	char *name;
	int age;
};

int main() {
	struct person p1;

	p1.name = "John Doe";
	p1.age = 1e1;

	struct person p2 = {"", 999};
	
	p1.age += 8;

	printf("%s %d\n", p1.name, p1.age); // John Doe 18
	printf("%s is %d years old.\n", p2.name, p2.age); //  is 999 years old.

	return 0;
}