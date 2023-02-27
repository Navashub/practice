#include <stdio.h>
#include <stdlib.h>

int main(void)
{
//creating linked list and displaying it 
//create a node
struct node 
{
    int data;
    struct node *next;
};

//printing head
struct node *head, *newnode, *temp;
head = 0;
int choice;
while (choice){

//typecasting
newnode = (struct node *)malloc(sizeof(struct node));

//ask for data from the user
printf("Enter data");
scanf("%d", &newnode -> data);
newnode -> next = 0;
if (head == 0)
{
    head = temp = newnode;
}else
{
    temp -> next = newnode;
    temp = newnode;
}
printf("\nDo you want to continue(0,1)?");
scanf("%d", &choice);
}
temp = head;
while (temp != 0)
{
    printf("%d", temp -> data);
    temp = temp -> next;
}
return 0;
}