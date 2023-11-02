#include "main.h"
/**
 * array_range - creates a array of integers
 * @min: minimum value in the array
 * @max: max value of the array
 * Return: pointer to the newlt created array
 */
int *array_range(int min, int max)
{
	int *new, i;

	if (min > max)
		return (NULL);
	new = malloc(sizeof(int) * ((max - min) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		new[i] = min;
		min++;
		i++;
	}
	return (new);
}
