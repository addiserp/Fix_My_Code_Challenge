#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a list
 *
 * @head: A pointer to the first element of the list
 */
void free_dlistint(dlistint_t *head)
{


	while (head)
	{
		dlistint_t *node = head->next;
		
		free(head);
		head = node;
	}
}
