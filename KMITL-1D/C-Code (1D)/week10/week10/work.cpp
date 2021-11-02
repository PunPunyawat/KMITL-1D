#include <stdio.h>
int func(void);

int main() {

	func();

	return 0;
}

int func(void) {

	int number[7];

	for (int i = 0; i < 7; i++) {
		scanf_s("%d", &number[i]);

		if (number[i] > 200 || number[i] < -200) {
			printf("ERROR"); return 0;
		}

		else {

			if (number[i] >= 0 && number[i] <= 200) {
				printf("number Positive integers : %d\n", number[i]);

				if (number[i] % 2 == 0) {
					printf("Even number : %d\n", number[i]);

				}
				else {
					printf("Odd number : %d\n", number[i]);
				}
			}

			if (number[i] < 0 && number[i] >= -200) {
				printf("number Negative integers : %d\n", number[i]);

				if (number[i] % 2 == 0) {
					printf("Even number : %d\n", number[i]);

				}
				else {
					printf("Odd number : %d\n", number[i]);
				}


			}

		}
	}
}