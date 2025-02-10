#include <stdio.h>
#include <stdlib.h>
#include "/workspaces/linkedList-exercices/header.h"

t_list *create_newnode(int val)
{
    t_list  *newnode = malloc(sizeof(t_list));
    newnode->n = val;
    newnode->next = NULL;
    return(newnode);
}

t_list *add_to_end(t_list *head, t_list *newnode)
{
	t_list *tmp = head;
	if (!head)
		return newnode;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;
	return (head);
}

int main()
{
    int i = 0;
    int arr[5] = {1, 2, 0, 4, 5};
    int len = sizeof(arr) / sizeof(arr[i]);
    t_list  *head = malloc(sizeof(t_list));
	head = NULL;
    while(i < len)
    {
        head = add_to_end(head, create_newnode(arr[i]));
        i++;
    }

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
	
}
