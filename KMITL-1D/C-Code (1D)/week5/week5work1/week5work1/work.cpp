#include<stdio.h>
void test(int num);

int num, i = 0, j = 122, h = 0;

int main() {

	printf("Enter a number : ");
	scanf_s("%d", &num);
	if (num <= 0) {
		printf("ERROR"); return 0;
	}

	test(num);


	return 0;
}

void test(int num) {

	for (i = 0; i < num; i++) {

		for (j = 122 - i; h < num; j--) {

			printf("%c", j);
			h++;

		}
		printf("\n");

		h = 0;
	}

}





