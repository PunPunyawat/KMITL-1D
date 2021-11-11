#include <stdio.h>
int num(void);

struct data {

	int total[2][2];
	int num;
	int num2;
	int i, j;

}deta;



int main()
{

	printf("Enter Your number only !!!!\n\n");
	num();

	printf("the total is : %d", deta.num2);
	printf("\n\nTHX YOU !! ");

	return 0;
}

int num(void) {

	for (deta.i = 0; deta.i < 2; deta.i++)
	{
		for (deta.j = 0; deta.j < 2; deta.j++)
		{

			printf("number [%d][%d] : ", deta.i, deta.j);
			scanf_s("%d", &deta.total[deta.i][deta.j]);

			deta.num = deta.total[deta.i][deta.j] + deta.num;

			deta.num2 = deta.num;
		}
		printf("\n");
	}


	return deta.num2;
}