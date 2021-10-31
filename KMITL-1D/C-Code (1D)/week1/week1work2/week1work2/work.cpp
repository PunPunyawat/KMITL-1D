#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {

	int num1, num2, num3, num4, re;
	do {
		printf("Enter number 1 : ");
		scanf_s("%d", &num1);
		printf("Enter number 2 : ");
		scanf_s("%d", &num2);
		printf("\n1 : add + \n"); printf("2 : add - \n"); printf("3 : add * \n"); printf("4 : add / \n");
		printf("\nEnter what you want to do :  ");
		scanf_s("%d", &num3);

		if (num3 == 1) { printf("\n# ans is %d", num1 + num2); }
		else if (num3 == 2) { printf("\n# ans is %d", num1 - num2); }
		else if (num3 == 3) { printf("\n# ans is %d", num1 * num2); }
		else if (num3 == 4) { printf("\n# ans is %d", num1 / num2); }
		else { printf("\n\nERROR !!!!!"); }

		printf("\n\n\tThank !!\n\n");
		printf(" Play again   Enter \' 00 \' only\n EXIT \t      Enter \' 11 \' only "); printf("\n\nEnter : ");
		scanf_s("%d", &re);

		printf("\n********************************\n\n");
	} while (re == 00);

	printf("\n\tThank to play :) \n");

	return 0;
}