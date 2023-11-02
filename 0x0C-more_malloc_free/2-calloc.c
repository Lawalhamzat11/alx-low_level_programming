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

	if (nmemb == 0 || size == 0)
		return (NULL);
	new = (void *)malloc(nmemb * size);
	if (new == NULL)
		return (NULL);
	return (new);
}
