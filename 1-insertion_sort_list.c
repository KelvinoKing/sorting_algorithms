#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - perform insertion sort on a doubly linked list
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prev_node, *curr;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;
	while (curr != NULL)
	{
		prev_node = curr->prev;
		while (prev_node != NULL && prev_node->n > curr->n)
		{
			if (curr->next != NULL)
				curr->next->prev = prev_node;

			prev_node->next = curr->next;
			curr->prev = prev_node->prev;
			curr->next = prev_node;
			prev_node->prev = curr;
			
			if (curr->prev != NULL)
				curr->prev->next = curr;
			else
				*list = curr;

			print_list(*list);
			
			prev_node = curr->prev;
		}

		curr = curr->next;
	}
}
