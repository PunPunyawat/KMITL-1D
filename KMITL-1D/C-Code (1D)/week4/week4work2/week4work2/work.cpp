#include<stdio.h>
int main() {

	int sum=0, x, i;
	printf("Enter number : ");
	scanf_s("%d", &x);
	if (x == 0 || x < 0) {
		printf("\nError !! ");
			return 0;
	}
	printf("\nP(%d) = ", x);
	for (i = 1; i < x; i++) {
		if (x % i == 0) {

			if (i != 1) {
				printf("+");
			}

			printf("%d", i);
			sum += i;


		}
	}

	printf(" = %d\n",sum);
	return 0;
}