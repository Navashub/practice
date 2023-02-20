#include <stdio.h>

int main (void)
{
	int age , salary;
	
	printf("Enter age & salary");
	scanf("%d %d", &age, &salary);
	
	if (age > 50)
	{
		if (salary < 60000)
		{
			salary = salary + 10000;
			printf("%d", salary);
		}
		else
		{
			salary = salary + 5000;
			printf("%d", salary);
		}
	}
	else
	{
		salary = salary + 3000;
		printf("%d", salary);
	}
	printf("End of program");
	return(0);
}
