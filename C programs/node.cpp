#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

int main() {
	struct node *head =(struct node *)malloc(sizeof(struct node));
	head->data = 1;
	head->link = NULL;
	printf("%d\n", head->data);
	
	struct node *node2 =(struct node *)malloc(sizeof(struct node));
	node2->data = 2;
	node2->link = NULL;
	head->link = node2;
	printf("%d\n", node2->data);
	
	node2 =(struct node *)malloc(sizeof(struct node));
	node2->data = 3;
	node2->link = NULL;
	head->link->link = node2;
	printf("%d\n", node2->data);
	
	node2=(struct node *)malloc(sizeof(struct node));
	node2->data = 4;
	node2->link = NULL;
	head->link->link->link = node2;
	printf("%d\n", node2->data);
	
	return 0;
}
