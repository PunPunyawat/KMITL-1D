#include<stdio.h>
int prime(int);


int main() {
	int a;
	printf(" Find the prime or not prime\n\n");
	printf(" Enter number : ");
	scanf_s("%d", &a);

	if (a > 0) {
		if (prime(a) == a) {
			printf("\n %d is prime number !", a);
		}
		else {
			printf("\n %d not prime number !", a);
		}
	}
	else {
		printf(" ERROR");
	}


	return 0;
}

int prime(int a) {

	int j;
	j = 2;
	while (a % j != 0) {

		j++;
	}

	if (j == a) {
		return a;
	}
	else {
		return 0;
	}

}