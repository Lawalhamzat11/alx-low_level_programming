#include "function_pointers.h"
/**
 * array_iterator - a function given as parameter on each element of an array.
 * @size: size of the array
 * @action: pointer to a fuction
 * @array: array to be iterated
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
