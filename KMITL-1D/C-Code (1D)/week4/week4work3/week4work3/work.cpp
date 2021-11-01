#include <stdio.h>

int main() {

    float a, b, c;
    printf("  		enter score\n\n");
    printf("	(maximum point per subject is 100)\n\n");
    printf("score subject 1 : ");
    scanf_s("%f", &a);
    if (a < 0 || a>100) {
        printf("ERROR"); return 0;
    }
    printf("score subject 2 : ");
    scanf_s("%f", &b);
    if (b < 0 || b>100) {
        printf("ERROR"); return 0;
    }
    printf("score subject 3 : ");
    scanf_s("%f", &c);
    if (c < 0 || c>100) {
        printf("ERROR"); return 0;
    }
    int sum = (a + b + c) / 3;

    if (sum >= 0 && sum <= 100) {


        if (sum <= 100.0 && sum >= 80.0) {
            printf("A");

        }
        else if (sum < 80.0 && sum >= 75.0) {
            printf("B+");

        }
        else if (sum < 75.0 && sum >= 70.0) {
            printf("B");

        }
        else if (sum < 70.0 && sum >= 65.0) {
            printf("C+");

        }
        else if (sum < 65.0 && sum >= 60.0) {
            printf("C");

        }
        else if (sum < 60.0 && sum >= 55.0) {
            printf("D+");

        }
        else if (sum < 55.0 && sum >= 50.0) {
            printf("D");

        }
        else if (sum < 50.0 && sum >= 0.0) {
            printf("F");

        }
    }
    else {
        printf("\n\n ERROR");
    }

    return 0;
}