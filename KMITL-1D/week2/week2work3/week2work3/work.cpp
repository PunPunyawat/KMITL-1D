#include<stdio.h>

int main() {
	int num, star;
	scanf_s("%d", &num);
	for (int low = 1; low <= num; low++) {
		for (star = 1; star <= num; star++) {
			if (star == 1 || low == 1 || star == num || low == num || star == low) {
				printf("O");
			}
			else { printf(" "); }

		}
		printf("\n");
	}


	return 0;
}

