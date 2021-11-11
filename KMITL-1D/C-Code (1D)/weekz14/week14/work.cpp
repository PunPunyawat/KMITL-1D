#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
float enaddnum(float*, float*);
float ennuin(float*, float*);
float total, total2;

int main() {

	string name;
	cout << "\tHello master" << endl << endl;
	cout << "  would you like to do something" << endl << endl;
	int ennum;
	cout << "  1.Yes    2.No" << endl;
	cout << "please enter number : ";
	cin >> ennum;

	if (ennum == 1) {

		char name[30];
		printf("\n\nYour name : ");
		scanf_s("%s",name,29);


		float no1[3];
		for (int i = 1; i < 3; i++) {

			printf("Enter number %d: ", i);
			scanf_s("%f", &no1[i]);

		}

		int gg;
		cout << "\n  would you like to do " << endl << endl;
		cout << "  1.x (multiply)   2./ (divide) " << endl;
		cout << "please enter number : ";
		cin >> gg;

		if (gg == 1 || gg == 2) {

			if (gg == 1) {

				enaddnum(&no1[1], &no1[2]);
				printf("\n\n %s your total is ", name);
				printf("%.2f  !!!!", total);
				printf("\n\n THX YOU '%s'", name);

			}

			else if (gg == 2) {
				ennuin(&no1[1], &no1[2]);
				printf("\n\n %s your total is ", name);
				printf("%.2f  !!!!", total2);
				printf("\n\n THX YOU '%s'", name);
			}
			else {
				printf("ERROR");
				return 0;
			}

		}
	}


	if (ennum == 2) {
		printf("\n\nTHX for play  :)  ");

	}

	if (ennum != 1 && ennum != 2) {
		printf("\n\nerror");
		return 0;
	}


	return 0;
}


float enaddnum(float* num1, float* num2) {

	total = (*num1) * (*num2);
	printf("\ntotal is : %.3f", total);

	return total;
}

float ennuin(float* num1, float* num2) {


	total2 = (*num1) / (*num2);
	printf("\ntotal is : %.3f", total2);

	return total2;
}