#include<stdio.h>


int main() {

	int count = 0, tim = 1, add;

	printf("Enter number : ");
	scanf_s("%d", &add);

	if (add >= 0 && add <= 999999) {

		for (tim = 1; tim <= add; tim++) {

			if (add % tim == 0) {

				count++;

			}

		}

		if (count == 2) {
			printf("\n %d is prime", add);
			printf("\n\n THX :) ");
		}
		else {
			printf("\n %d is not prime", add);
			printf("\n\n THX :) ");
		}

	}

	else printf("ERROR !!");

	return 0;
}


