#include <stdio.h>

int main()
{

    int total[3][3]; int num = 0;
    printf("Enter Your number only !!!!\n\n");
  
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            printf("number [%d][%d] : ", i, j);
            scanf_s("%d", &total[i][j]);
            num = total[i][j] + num;
            
        }
        printf("\n");
    }

    printf("the total is : %d", num);
    printf("\n\nTHX YOU");

    return 0;
}