#include<stdio.h>

int main() {
	
	int inpu=0,i=2;
	printf("Enter number : ");
	scanf_s("%d", &inpu);
	printf("Factoring Result : ");
	if (inpu <= 0) {
		printf("ERROR");  return 0;
	}
	else if (inpu == 1) {
		printf("1"); return 0;
	}
	while (inpu != 1) {

		
		while (inpu%i==0)
		{
			printf("%d X ", i);			
			inpu /= i;
		}
		i++;	
		}

		if (inpu==1) {
			printf("\b\b");
		}

	return 0;
}