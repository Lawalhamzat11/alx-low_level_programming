#include "main.h"
/**
 * _calloc - allocates memory for.an array using malloc
 * @nmemb: number of element in the array
 * @size: size bytes ofneach element in the array
 * Return: a pointer to the allocated.memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new = 0;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new = malloc(nmemb * size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*((char *)(new) + i) = 0;
	return (new);
}
