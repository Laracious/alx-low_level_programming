
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a lists_t list.
 * @h: The list_t list.
 *
 * Return: The number of notes in h.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (n11)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
