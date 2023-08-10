#include <stdio.h>

union person {
	char initial;
	int age;
};

int main() {
	union person p1;

	p1.initial = 'J';
	p1.age = 1e1;

	union person p2 = {.age = 999};
	
	p1.age += 8;

	printf("%c %d\n", p1.initial, p1.age); //  18
	printf("%c is %d years old.\n", p2.initial, p2.age); // � is 999 years old.

	return 0;
}