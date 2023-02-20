#include <stdio.h>

int main()
{
	int x, y, t;
	
	printf("Enter two integers\n");
	scanf("%d%d", &x, &y);
	
	printf("Before swapping\n First integer= %d\n Second integer =%d\n", x, y);
	
	t = x;
	x = y;
	y = t;
	
	printf("After swapping\n First integer =%d\n Second integer =%d\n", x, y);
	
	return 0;
}
