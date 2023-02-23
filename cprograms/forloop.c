#include <stdio.h>

int main (void)
{
	int i = 1;
	int j = 1;
	char symbol = '*';
	
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 2; j++)
		{
			printf("%c", symbol);
		}
		printf("%c\n", symbol);
	}
}
