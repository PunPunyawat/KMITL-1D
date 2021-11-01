#include<stdio.h>

int num, star, row, bar;

void fly(int num) {

	for (row = 1; row < num; row++) {

		for (star = 1; star <= row; star++) {
			printf("* "); //star left up			
		}
		for (bar = 1; bar <= num - row; bar++) {
			printf("  "); //space left up
		}
		for (bar = num - 1; bar > row; bar--) {
			printf("  "); //space right up
		}
		for (star = 1; star <= row; star++) {
			printf("* ");	//star right up
		}
		putchar('\n');
	}


	for (row = 1; row <= 1; row++) {
		for (star = 1; star <= 2 * num - 1; star++) {
			printf("* "); //star mid
		}
		putchar('\n');
	}

	for (row = 1; row < num; row++) {
		for (star = 1; star <= num - row; star++) {
			printf("* "); //star left down
		}
		for (bar = 1; bar <= row; bar++) {
			printf("  "); //space left down
		}
		for (bar = 1; bar < row; bar++) {
			printf("  "); //space right down
		}
		for (bar = 1; bar <= num - row; bar++) {
			printf("* ");  //star right down

		}
		putchar('\n');

	}


}


int main() {

	printf("ENTER NUMBER : ");
	scanf_s("%d", &num);
	if (num == 0 || num < 0) {
		printf("\nERROR");  return 0;
	}

	fly(num);

	return 0;
}
