#include "lists.h"
/**
  * free_list - frees the memory
  * @head: pointer to a struct
  */
void free_list(list_t *head)
{
	list_t *tmp;

	for (tmp = head; tmp != NULL; tmp =  head)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
