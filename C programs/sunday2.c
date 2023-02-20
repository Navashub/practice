#include <stdio.h>
#include <stdlib.h>

//define the node structure
typedef struct ages{
	char *name;
	int age;
	struct ages *link;
}a;

//create a function that will create nodes
a* add_node(char *name, int age){
	//create a template
	a *temp = malloc(sizeof(a));
	temp->name = name;
	temp->age = age;
	temp->link = NULL;
	return temp;
}

//begin your main function
int main()
{
	//create the nodes using the function you defined.
	a *head = add_node("Navas", 23);
	a *second = add_node("Kip", 20);
	a *third = add_node("Irene", 23);
	a *last = add_node("Dylan", 25);
	
	//connect the nodes
	head->link = second;
	second->link = third;
	third->link = last;
	
	//create transversal pointer to transverse the list
	a *trav = head;
	
	//print data of each node
	while (trav != NULL)
	{
		printf("%s %d\n", trav->name, trav->age);
		trav = trav->link;
	}
}