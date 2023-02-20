#include <stdio.h>
#include <stdlib.h>

/*
1.Declare a variable to store the sum. Say int sum;.

2.We should initialize the sum variable to 0.i.e. sum = 0;

3.Loop through all the elements in the array and add them to variable sum.

4.Print the sum.
*/

int main(void)
{
    int arr[5], i, sum = 0;

    printf("Enter five numbers: ");
    for (i=0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    printf("\n Sum of the array is: %d\n", sum);
    return 0;
}