#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                        order using the Insertion sort algorithm.
 *
 * @list: A pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next_node, *temp;

	if (list == NULL || *list == NULL)
		return;

	current = *list;
	while (current != NULL)
	{
		next_node = current->next;
		while (next_node != NULL && current->n > next_node->n)
		{
			temp = next_node->next;
			if (current->prev)
				current->prev->next = next_node;
			if (next_node->next)
				next_node->next->prev = current;

			next_node->prev = current->prev;
			current->next = temp;
			next_node->next = current;
			current->prev = next_node;

			if (current == *list)
				*list = next_node;

			print_list(*list);
			next_node = temp;
		}
		current = current->next;
	}
}
