#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
int main() {

	char name[]="BOSS", capi[100]; int num1{};
	printf("Hello eveyone !!\n");
	printf("My name is computer\n");
	printf("\nHello %s \n\n", name);
	printf("where your from ??\n\n");
	printf(" 1 : THAILAND \n 2 : SINGAPORE \n 3 : FILIPINAS \n 4 : OHTHER \n");
	printf("\nEnter number : ");
	scanf_s("%d", &num1);
	switch (num1) {

	case 1: printf("\nHello Thailand <3 "); break;
	case 2: printf("\nHello Singapore <3 "); break;
	case 3: printf("\nHello Filiponas <3 "); break;
	case 4: printf("\nwhere is ??\n"); printf("add the country : ");
		scanf_s("%s",&capi); printf("Hello %s <3 ", capi); break;
	default: printf("ERROR");

	}
	printf("\n\n    THANK YOU !!!");
	return 0;
}