#include <stdio.h>

int main (void)
{
	int i;
	int a[5];
	
	printf("Enter elements of array: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("\narray alement at index %d is: %d", i, a[i]);
	}
}
