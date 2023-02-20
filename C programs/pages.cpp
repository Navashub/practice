#include <stdio.h>

int main (void)
{
	int pages, cost;
	
	printf("Enter pages: ");
	scanf("%d", &pages);
	
	if (pages > 50)
	{
		if (pages < 100)
		{
			cost = pages * 10;
			printf("%d/-", cost);
		}
		else
		{
			cost = pages * 7;
			printf("%d/-", cost);
		}
	}
	else
	{
		cost = pages * 20;
		printf("%d/-", cost);
	}
	
	return(0);
}
