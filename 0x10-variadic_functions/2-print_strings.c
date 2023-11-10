#include "variadic_functions.h"
/**
  * print_strings - prints strings followed by a new line
  * @separator: string to be printed btw strings
  * @n: numbs of strings passed
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *string;

	va_start(strings, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		string = (!string) ? "(nil)" : string;
		if (i == n - 1)
		{
			printf("%s", string);
			break;
		}
		printf("%s%s", string, separator);
	}
	va_end(strings);
	printf("\n");
}
