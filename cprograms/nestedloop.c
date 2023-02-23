#include <stdio.h>

int main()
{
	int rows;
	int columns;
	int i;
	int j;
	char symbol = '*';
	
	printf("\nEnter number of rows: ");
	scanf("%d", &rows);
	printf("\nEnter number of columns: ");
	scanf("%d", &columns);
	
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= columns; j++)
		{
			printf("%c", symbol);
		}
		printf("%c\n", symbol);
	}
	return (0);
}
