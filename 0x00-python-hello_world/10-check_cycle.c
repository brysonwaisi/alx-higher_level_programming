#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */

int check_cycle(listint_t *list)
{
	listint_t *bryson, *nyamwange;

	if (list == NULL || list->next == NULL)
		return (0);

	bryson = list->next;
	nyamwange = list->next->next;

	while (bryson && nyamwange && nyamwange->next)
	{
		if (bryson == nyamwange)
			return (1);

		bryson = bryson->next;
		nyamwange = nyamwange->next->next;
	}

	return (0);
}
