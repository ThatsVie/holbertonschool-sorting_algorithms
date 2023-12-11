#include "sort.h"
/**
 * insertion_sort_list -  sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: Double linked list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL; /*Pointer to current node being processed*/
	listint_t *last = NULL; /*Pointer to last sorted node*/
	listint_t *next_temp = NULL; /* Temporary pointer to the next node */

	/* Check for valid input conditions */
	if (!list || !(*list) || !(*list)->next)
		return;
	/* Initialize the current pointer to the second node in the list */
	current = (*list)->next;

	/* Iterate through the list starting from the second node */
	while (current)
	{
		next_temp = current->next; /* Save next node before swaps */
		last = current->prev; /*Start from the last sorted node*/

		/* Iterate through sorted part of list and swap if necessary */
		while (last && current->n < last->n)
		{
			/* perform swap */
			if (last->prev)
				last->prev->next = current;
			last->next = current->next;
			current->next = last;
			current->prev = last->prev;
			last->prev = current;
			if (last->next)
				last->next->prev = last;
			/* Update the head of the list */
			if (!current->prev)
				(*list) = current;

			/* Move to the previous node for further comparisons */
			last = current->prev;
			/* Print the list after each swap */
			print_list(*list);
		}
		/* Move to the next node in the unsorted part of the list */
		current = next_temp;
	}
}
