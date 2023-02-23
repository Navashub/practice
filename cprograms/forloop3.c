#include <stdio.h>

int main()
{
    int i, j, spaces;

    for (i = 1; i <= 3; i++)
    {
        for (spaces = 1; spaces < i; spaces++)
        {
            printf(" ");
        }
        for (j = 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}