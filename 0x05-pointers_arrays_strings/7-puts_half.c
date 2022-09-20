#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int index, n;

	index = 0;
	while (str[index] != '\0')
		index++;

	n = index / 2;

	if (index % 2 == 1)
		n++;

	while (n < index)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
