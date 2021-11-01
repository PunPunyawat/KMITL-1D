#include<stdio.h>
int like(int);
int num;
int main() {

	printf("Enter Your Favorite number : ");
	scanf_s("%d", &num);
	if (num >= 1 && num <= 99999) { 
	
		if (like(num) == num) {
		printf("\n\nTHX YOU\n");
		
		}
	}
	else { printf("ERROR !!!! "); return 0; }

	return 0;
}


int like(int a) {

	printf("\n   This is factor of your favorite number !!! \n\n");
	printf("IS : ");
	for (int i = 1; i <= num; i++) {

		if (num % i == 0) {

			if (i != 1) {
				printf(",");
			}
			printf(" %d ", i);

		}
	}

	return num;
}