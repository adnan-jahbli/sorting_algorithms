#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sorts a doubly linked list f integers in
 * ascending order using the Insertion sort algorithm.
 * @list: the given doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	int i, j, temp;
	listint_t *head, *tempp, *temppp;

	head = *list;

	if (head->next == NULL)
		return;

	i = 1;
	head = head->next;
	while (head != NULL)
	{
		tempp = head;
		for (j = i; j > 0; j--)
		{
			if (tempp->n < tempp->prev->n)
			{
				temp = tempp->n;
				tempp->n = tempp->prev->n;
				tempp->prev->n = temp;

				temppp = *list;
				while (temppp != NULL)
				{
					printf("%d", temppp->n);
					if (temppp->next != NULL)
						printf(", ");
					temppp = temppp->next;
				}
				printf("\n");
			}
			else
				break;
			tempp = tempp->prev;
		}
		i++;
		head = head->next;
	}
}
