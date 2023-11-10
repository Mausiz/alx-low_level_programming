#include "lists.h"

/**
 * add_dnodeint - adds a new node at the be...
 * @head: of list
 * @n: value of element
 * Return: the address of the new element
 */
dlistint_t *add_dnoteint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
