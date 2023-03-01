#include <stdio.h>

int main(void)
{
    int i, n;

    printf ("Enter number of integers: ");
    scanf("%d", &n);
    int *ptr = (int*)malloc(n*sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not available!");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", ptr + 1);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", *(ptr + 1));
    }
    free(ptr);
    return 0;
}