#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

/* Returns decimal value of binary linked list */
int nav(struct Node *head)
{
    // result
    int res = 0;

    //transversing
    while (head != NULL)
    {
        // Multiply res by 2
        res = (res << 1) + head->data;

        //move to next
        head = head->next;
    }
    return res;
}

//new node 
struct Node *newnode(int data)
{
struct Node *head, *newnode;
head = 0;
newnode = (struct Node *)malloc(sizeof(struct Node));
newnode->data = data;
newnode->next = NULL;

return newnode;
}

int main()
{
    /* Start with the empty list */
    struct Node* head = newnode(1);
    head->next = newnode(0);
    head->next->next = newnode(0);
    head->next->next->next = newnode(1);
    int ans = nav(head);
    printf("Decimal value is %d\n ",ans);
 
    return 0;
}