#include<stdio.h>

int main() {

	int num, i = 1, j=122, h = 1;

	printf("Enter a number : ");
	scanf_s("%d", &num);
	if (num < 0) {
		printf("ERROR"); return 0;
	}
	if (num == 0) {
		printf("(NULL)"); return 0;
	}
	for (i = 1; i <= num; i++) {
		h = i;
		for (j = 122; h <= num; j--) {
			printf("%c", j);
			h++;
		}
		printf("\n");
	}
	return 0;
}