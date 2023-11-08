#include "function_pointers.h"
/**
   * int_index - searches for an integer
   * @array: array to be processed
   * @size: numbr of the element in the array
   * @cmp: pointer to the function to be used to compare values
   * Return: the index of the first element found
   */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || !array)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			break;
		}
	}
	return ((i > 19) ? (-1) : (i));
}
