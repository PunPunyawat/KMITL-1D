#include<stdio.h>

int main() {

	int row, j = 1, star1;

	printf("Enter a number : ");
	scanf_s("%d", &row);
	if (row >= 0 && row <= 10) {
		printf("\n");
		for (int i = 0; i < row; i++) {
			for (int star = 0; star <= i; star++) {
				printf("%d", star);
			}
			printf("\n");
		}
		for (int i = 0; i < row; i++) {
			for (int star = 0; star < row; star++) {
				printf(" ");
			}
			for (int star = 0; star < i; star++) {
				printf(" ");
			}
			for (int star1 = row - j; star1 >= 0; star1--) {
				printf("%d", star1);
			}
			printf("\n");
			j++;
		}
	}
	else {
		printf("ERROR");
	}
	return 0;
}