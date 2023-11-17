#include "lists.h"
/**
  * add_node_end - adds a new node at the end of a list_t list.
  * @head: address that points to a linked list
  * @str: string to be duplicated
  * Return: the address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *current;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = NULL;
	current = *head;
	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = tmp;
	}
	return (*head);
}
