#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i <= 2; i++) // number of rows
    {
        for (j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}