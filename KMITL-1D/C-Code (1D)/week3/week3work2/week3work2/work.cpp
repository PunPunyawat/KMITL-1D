#include <stdio.h>

int main() {
	int num, low = 0, star = 0, add = 0, starr=0;
	printf("Enter number : ");
	scanf_s("%d", &num);
	if (num > 0) {
		for (low = 0; low < num; low++) {


			for (star = 0; star <= low; star++) {

				printf("* ");
			}
			printf("\n\n");
		}


		for (add = 0; add <= num; add++) {

			for (starr = num - add; starr > 0; starr--) {
				printf("+ ");
			}
			printf("\n\n");
		}
	}
	else printf("ERROR");

	return 0;
}