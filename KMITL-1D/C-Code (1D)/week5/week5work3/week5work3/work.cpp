#include <stdio.h>

int main() {

    int i = 1, space = 1, num, j = 0;
    printf("Enter a number : ");
    scanf_s("%d", &num);
    if (num <= 0) {
        printf("ERROR"); return 0;
    }
    else {
        for (i = 1; i <= num; i++) {

            for (space = 1; space <= num - i; space++) {
                printf("  ");

            }

            while (j != (2 * i) - 1) {
                printf("* ");
                j++;
            }

            printf("\n");

            j = 0;
        }
    }
    return 0;
}