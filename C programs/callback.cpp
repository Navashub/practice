//Function pointers and callbacks
#include<stdio.h>
void A()
{
	printf("Hello");
}
void B(void (*ptr)()) //function pointer as argument
{
	ptr(); //call-back function that "ptr" points to
}
int main()
{
	void (*p)() = A;
	B(p);
	//B(A); // A is a cllback function
}

