#include <stdio.h>

void repeaat_alphabet(void)
{
	int i; char cha;
	
	i = 0;
	while (i < 10)
	{
		cha = 'A';
		while (cha <= 'Z')
		{
			putchar(cha); //AB............Z
			cha++;
			
		}
		
		putchar('\n');
		i++;
	}
	
}


int main(void)
{
	
	return 0;
}
