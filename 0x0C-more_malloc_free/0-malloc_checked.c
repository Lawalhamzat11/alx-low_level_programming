#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size bytes to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (!new)
		exit(98);
	return (new);
}
