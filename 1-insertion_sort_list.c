#include "sort.h"
#include <stdio.h>

/**
 * swap - swaps two nodes
 * key: current node
 * prev_node: previous node
 * list: pointer to list
 */
void swap(listint_t *key, listint_t *prev_node, listint_t **list)
{
	listint_t *temp;

	temp = prev_node->prev;
	if (temp)
		temp->next = key;
	else
		*list = key;

	key->prev = temp;

	prev_node->prev = key;
	prev_node->next = key->next;
	key->next = prev_node;
	if (prev_node->next)
		prev_node->next->prev = prev_node;
	else
		prev_node->next = NULL;
}

/**
 * insertion_sort_list - perform insertion sort on a doubly linked list
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
<<<<<<< HEAD
	listint_t *key = NULL;

	if (list == NULL || *list == NULL)
		return;

	key = (*list)->next;
	while (key)
	{
<<<<<<< HEAD
		while (key->prev && key->prev->n > key->n)
		{
			swap(key, key->prev, list);
			print_list(*list);
		}
		key = key->next;
	}
}
