#include <stdio.h>
#include <stdlib.h>

/**
 * node - structure
 *main - //pass
 *
 *Return: Always 0
 */
 typedef struct node
 {
 	int data;
 	struct node *link;
 }navas;
 
 navas* add_to_end(navas *ptr, int data);
 
 int main()
 {
 	navas *head = (navas *)malloc(sizeof(navas));
 	head->data = 15;
 	head->link = NULL;
 	navas *ptr = head;
 	ptr = add_to_end(ptr,6);
 	ptr = add_to_end(ptr,7);
 	ptr = head;
 	
 	while (ptr != NULL)
 	{
 		printf("%d\n", ptr->data);
 		ptr = ptr->link;
	 }
 	return 0;
 }
 navas* add_to_end(navas *ptr, int data)
 {
 	struct node *temp = (navas *)malloc(sizeof(struct node));
 	temp->data = data;
 	temp->link = NULL;
 	ptr->link = temp;
 	return temp;
 };
