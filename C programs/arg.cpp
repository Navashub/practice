#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i;
	scanf("%d", &argc);
	printf("argc = %d", argc);
	printf("let us now see what is inside argv[]\n");
	
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	
	return 0;
}
