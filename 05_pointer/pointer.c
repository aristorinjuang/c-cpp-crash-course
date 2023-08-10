#include <stdio.h>

int main() {
	char *name = "John Doe";
	char **pointer = &name;

	*pointer = "John Cena";

	printf("%s\n", name); // John Cena

	return 0;
}