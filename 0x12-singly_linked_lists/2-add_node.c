#include "lists.h"
/**
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: address that points to a linked list
  * @str: string to be duplicated
  * Return: the address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = *head;
	*head = tmp;

	return (*head);

}
