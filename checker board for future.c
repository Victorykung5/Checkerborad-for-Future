#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter wide of board =");
    scanf("%d", &a);
    printf("Enter long of board =");
    scanf("%d", &b);
    if(a>=3&&b>=3){
    for (int c = 0; c < a; c++)
    {
        for (int d=0;d < b; d++)
        {
            if (c % 2 == 1)
            {
                if (d % 2 == 0)
                    printf("X");
                else
                    printf("O");
            }
            else
            {
                if (d % 2 == 1)
                    printf("X");
                else
                    printf("O");
            }
        }
        printf("\n");
    }
    }
    else
    printf("ERROR!");
    return 0;
}