#include <stdio.h>
#include <stdlib.h>











//create the node for your linked list
emp *first = NULL;
emp *second = NULL;
emp *last = NULL;

//begin your main function
int main()
{
	//allocate memory for the nodes
	first = malloc(sizeof(emp));
	second = malloc(sizeof(emp));
	last = malloc(sizeof(emp));
	
	//fill the data in the nodes
	first->name = "navas";
	first->next = second;
	
	second->name = "james";
	second->next = last;
	
	last->name = "sunny";
	last->next = NULL;
	//create a pointer to traverse the nodes and assign
	emp *access = first;
	
	//print the data in each node
	while (access != NULL)
	{
		printf("Names : %s\n", access->name);
		access = access->next;
	}
	return 0;
}
