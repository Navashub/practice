#include <stdio.h>

int main (void)
{
	int rows;
	int columns;
	char symbol = '*';

    printf("\nEnter number of rows: ");
	scanf("%d", &rows);
	printf("\nEnter number of columns: ");
	scanf("%d", &columns);
	
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= columns; j++)
		{
			printf("%c", symbol);
		}
		printf("%c\n", symbol);
	}
}
