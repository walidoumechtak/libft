#include <stdio.h>

struct node{
	int data;
	struct	node *link;
};

#include <stdlib.h>
int main()
{
	struct node	*head;
	head = malloc(sizeof(struct node));
	head -> data = 2001;
	head -> link = NULL;

	struct node *current;
	current = malloc(sizeof(struct node));
	current -> data = 2004;
	current -> link = NULL;
	head -> link = current;

	printf("%d %d", head-> data, current -> data);
}
