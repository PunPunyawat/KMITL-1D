#include<stdio.h>
int star(int);
int num;
int main() {

	printf("enter number : ");
	scanf_s("%d", &num);
	if (num > 0 & num < 30) {

		star(num);

	}

	else {
		printf("ERROR");
	}

	return 0;
}

int star(int x) {

	for (int i = 1; i <= num; i++) {

		for (int j = 1; j <= num; j++) {

			if (j == 1 || i == 1 || i == num || j == num || j == (num - i + 1) || i == j) {
				printf("*");
			}
			else {
				printf(" ");
			}

		}
		printf("\n");

	}

	return x;
}