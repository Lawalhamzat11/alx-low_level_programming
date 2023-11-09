#include "variadic_functions.h"
/**
  * print_numbers - prints followed by a new line
  * @separator: string to be printed btw numbers
  * @n: numbs of interger passed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(numbers, int));
			break;
		}
		printf("%d%s", va_arg(numbers, int), separator);
	}
	printf("\n");
}
