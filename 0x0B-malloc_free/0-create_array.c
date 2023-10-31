#include "main.h"
/**
 * create_array - creates an array of chars initializes it with a specific char
 * @size: size of the array to be created
 * @c: char to initiliaze the array with
 * Return: NULL if it fails, pointer to the array on success
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(unsigned int) * size);
	if (!array)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
