#include <stdio.h>
#include <time.h>

void isEven(int num) {
	if (num % 2 == 0) {
		printf("%d is even.\n", num);
	} else {
		printf("%d is odd.\n", num);
	}
}

void greetings() {
	time_t now = time(0);
	struct tm *ltm = localtime(&now);

	switch (ltm->tm_hour) {
		case 1 ... 11:
			printf("Good morning!\n");

			break;
		case 12 ... 16:
			printf("Good afternoon.\n");

			break;
		default:
			printf("Good evening.\n");
	}
}

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	int sum = 1;
	while (sum < 1000) {
		sum += sum;
	}
	printf("%d\n", sum);
	
	int num;
	printf("Put a number: ");
	scanf("%d", &num);
	isEven(num);

	greetings();

	return 0;
}