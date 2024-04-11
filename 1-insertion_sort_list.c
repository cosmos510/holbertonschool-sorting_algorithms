#include "sort.h"


/* */
/**
* insertion_sort_list - function that sorts a doubly linked list of integers
* in ascending order using the Insertion sort algorithm
* @list: doubly linked list to sort the int of
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *prev;

	current = (*list)->next;
	tmp = current->next;
	while (tmp && current)
	{
		current = tmp;
		prev = current->prev;
		while (prev && (current->n < prev->n))
		{
			if (prev->prev)
				prev->prev->next = current;
			current->prev = prev->prev;
			prev->next = current->next;
			if (current->next)
				current->next->prev = prev;
			current->next = prev;
			prev->prev = current;
			if (current->prev == NULL)
				*list = current;
			prev = current->prev;
			print_list(*list);
		}
        tmp = tmp->next;
	}
}
