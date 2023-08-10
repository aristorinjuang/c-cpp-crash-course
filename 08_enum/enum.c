#include <stdio.h>

enum Color {
	RED,
	GREEN,
	BLUE
};

int main() {
	int number;
	printf("Input a number between 0-2: ");
	scanf("%d", &number);

	switch (number) {
		case RED:
            printf("Red\n");
            break;
        case GREEN:
            printf("Green\n");
            break;
        case BLUE:
            printf("Blue\n");
            break;
        default:
            printf("Undefined\n");
            break;
	}

	return 0;
}