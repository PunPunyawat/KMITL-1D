#include <stdio.h>
void minus(float*, float*);
void plus(float*, float*);

int main() {


	float number[3];
	int add;
	for (int i = 1; i < 3; i++) {
		printf(" Enter Your number [%d]: ", i);
		scanf_s("%f", &number[i]);
	}

	printf("\n     select your Pattern \n");
	printf("\n 1 : plus numbers \n 2 : minus numbers");
	printf("\n\nEnter number : ");
	scanf_s("%d", &add);

	if (add == 1 || add == 2) {

		if (add == 1) {
			plus(&number[1], &number[2]);
			printf("\n THX YOU");
		}

		else if (add == 2) {
			minus(&number[1], &number[2]);
			printf("\n THX YOU");
		}
		else {
			printf("ERROR");
			return 0;
		}

	}

	else {
		printf("ERROR");
	}



	return 0;
}

void minus(float* x, float* y) {

	float sumz;
	sumz = (*x - *y);
	printf("\n total is : %.2f\n", sumz);

}


void plus(float* x, float* y) {

	float sum;
	sum = (*x + *y);
	printf("\n total is : %.2f\n", sum);

}