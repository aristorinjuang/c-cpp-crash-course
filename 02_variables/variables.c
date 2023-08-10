#include <stdio.h>

int main() {
	// int a = 0, b = 1, c = 2;

	float pi = 3.141592653589793;
	const double real_pi = 3.141592653589793;

	printf("%f %ld\n", pi, sizeof(pi)); // 3.141593 4
	printf("%lf %li\n", real_pi, sizeof(real_pi)); // 3.141593 8

	char hello[] = "Hello";
	char world[6] = {'W', 'o', 'r', 'l', 'd', '\0'};
	char exclamation = 33;

	printf("%s %s%c\n", hello, world, exclamation); // Hello World!

	return 0;
}