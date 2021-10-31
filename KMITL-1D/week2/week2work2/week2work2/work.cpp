#include<stdio.h>

int main() {
	int num1, num2, i;
	printf("Enter first number : ");
	scanf_s("%d", &num1);
	printf("Enter second number : ");
	scanf_s("%d", &num2);
	if (num1 <= 0 || num2 <= 0) {
		printf("ERROR"); return 0;
	}
	else if (num1 > num2) {
		i = num1;
	}
	else if (num2 > num1) {
		i = num2;
	}

	while (num1 % i != 0 || num2 % i != 0) {
		i--;
	}
	printf("Greatest common divisor = %d", i);
	return 0;
}