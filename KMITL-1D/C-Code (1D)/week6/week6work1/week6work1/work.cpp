#include<stdio.h>
int test(char);

float v, u, t, a;
char letter;

int main() {


	printf("\tv = u + at");
	printf("\n\n");
	printf("choice you want to find : ");
	scanf_s("%c", &letter);
	test(letter);

	return 0;
}


int test(char x) {

	if (letter == 't' || letter == 'u' || letter == 'a' || letter == 'v') {

		switch (letter) {

		case't':
			printf("add number v : ");
			scanf_s("%f", &v); if (v < 0) { printf("ERROR"); return 0; }
			printf("add number u : ");
			scanf_s("%f", &u); if (u < 0) { printf("ERROR"); return 0; }
			printf("add number a : ");
			scanf_s("%f", &a); if (a < 0) { printf("ERROR"); return 0; }
			printf("\nt is %.2f", (v - u) / a); break;

		case'u':
			printf("add number v : ");
			scanf_s("%f", &v); if (v < 0) { printf("ERROR"); return 0; }
			printf("add number t : ");
			scanf_s("%f", &t); if (t < 0) { printf("ERROR"); return 0; }
			printf("add number a : ");
			scanf_s("%f", &a); if (a < 0) { printf("ERROR"); return 0; }
			printf("\nu is %.2f", v - (a * t)); break;

		case'a':
			printf("add number v : ");
			scanf_s("%f", &v); if (v < 0) { printf("ERROR"); return 0; }
			printf("add number t : ");
			scanf_s("%f", &t); if (t < 0) { printf("ERROR"); return 0; }
			printf("add number u : ");
			scanf_s("%f", &u); if (u < 0) { printf("ERROR"); return 0; }
			printf("\na is %.2f", (v - u) / t); 	break;

		case'v':
			printf("add number t : ");
			scanf_s("%f", &t); if (t < 0) { printf("ERROR"); return 0; }
			printf("add number u : ");
			scanf_s("%f", &u); if (u < 0) { printf("ERROR"); return 0; }
			printf("add number a : ");
			scanf_s("%f", &a); if (a < 0) { printf("ERROR"); return 0; }
			printf("\nv is %.2f", u + (a * t)); break;

		}
	}

	else {
		printf("ERROR"); return 0;
	}

}



