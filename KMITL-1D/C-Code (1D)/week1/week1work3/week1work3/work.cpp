#include <stdio.h>
#include <windows.h>

int main() {

	double wei, hei, BMI, tes;
test: { printf("\n");
	printf("\tHello !\n\n"); printf("pls enter your weight (kg.) : ");
	scanf_s("%lf", &wei);
	if (wei <= 0 || wei >= 300) { printf("ERROR !!!"); return 0; }
	else { printf("pls enter your height (m.)  : "); }
	scanf_s("%lf", &hei);
	if (hei <= 0 || hei >= 4) { printf("ERROR !!!"); return 0; }
	printf("\n   THANK FOR DATA\n");
	printf("\n WAIT A MINUTE !!!!\n\n");
	Sleep(1000);
	printf("  Your ' BMI '  : %.2lf", wei / (hei * hei));
	printf("\n\n    BMI table \n"); printf("***********************");
	printf("\n    BMI < 18.5          :  low standard ");
	printf("\n    BMI >= 18.5 - 22.9  :  standard ");
	printf("\n    BMI >= 23.0 - 24.9  :  high standard ");
	printf("\n    BMI >= 25.0 - 22.9  :  heavy ");
	printf("\n    BMI >= 30           :  danger ");
	printf("\n***********************");
	Sleep(1000); }
printf("\n\n play again add  '00' \n"); printf(" EXIT add  '11' \n");
printf("\n Enter number : "); scanf_s("%lf", &tes);
if (tes == 00) { goto test; }
else if (tes == 11) { printf("\n     BYE BYE !!"); }
else if (tes != 00.00 || tes != 11.00) { printf("***ERROR***"); }
return 0;
}