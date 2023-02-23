#include <stdio.h>

int main(void)
{
    int i, j, k;

    for (i = 1; i <= 3; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = 0; j < 4; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
