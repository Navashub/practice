#include <stdio.h>

int main (void)
{
	int i;
	int j;
	char symbol = '*';
	
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			printf("%c", symbol);
		}
		printf("%c\n", symbol);
	}
}
