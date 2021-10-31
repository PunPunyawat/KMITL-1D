#include<stdio.h>


int main() {

	float v, s, t;
	char add;

	printf("\nWould you want to find \n\n"); printf("v , s , t");
	printf("\nEnter : ");
	scanf_s("%c", &add);


	if (add == 'v' || add == 's' || add == 't') {

		switch (add) {

		case 'v':
			printf("add number S : ");
			scanf_s("%f", &s); if (s < 0) { printf("ERROR"); return 0; }
			printf("add number T : ");
			scanf_s("%f", &t); if (t < 0) { printf("ERROR"); return 0; }
			if (s == 0 || t == 0) { printf("\nV is 0.00 ");  return 0; }
			printf("\nV is %.2f", s / t); break;



		case 's':
			printf("add number V : ");
			scanf_s("%f", &v); if (v < 0) { printf("ERROR"); return 0; }
			printf("add number T : ");
			scanf_s("%f", &t); if (t < 0) { printf("ERROR"); return 0; }
			if (v == 0 || t == 0) { printf("\nS is 0.00 ");  return 0; }
			printf("\nS is %.2f", v * t); break;


		case 't':
			printf("add number V : ");
			scanf_s("%f", &v); if (v < 0) { printf("ERROR"); return 0; }
			printf("add number S : ");
			scanf_s("%f", &s); if (s < 0) { printf("ERROR"); return 0; }
			if (s == 0 || v == 0) { printf("\nT is 0.00 ");  return 0; }
			printf("\nT is %.2f", s / v); break;

			return 0;

		}

	}
	else if (add != 's' || add != 'v' || add != 't') printf("ERROR");


	return 0;
   }

