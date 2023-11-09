#include "variadic_functions.h"
/**
 * sum_them_all - sum all its paramenters
 * @n: number of arguments
 * Return: the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list numbrs;

	va_start(numbrs, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		result += va_arg(numbrs, int);
	}
	return (result);
}
