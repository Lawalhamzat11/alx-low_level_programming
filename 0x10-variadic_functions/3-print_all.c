#include "variadic_functions.h"
/**
  * print_all - prints anything
  * @format: arument passed
  */
void print_all(const char * const format, ...)
{
	va_list arg;
	char *sep = "";
	op_t ops[] = {
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{"c", print_char},
		{NULL, NULL}
	};
	int i, j;

	va_start(arg, format);
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (ops[j].op)
		{
			if (format[i] == *(ops[j].op))
			{	ops[j].f(arg, sep);
				break;
			}
			j++;
		}

		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(arg);
}
/**
  * print_str - prints strings
  * @args: arument passed
  * @sep: separator
  */
void print_str(va_list args, char *sep)
{
	char *s	= va_arg(args, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s%s", sep, s);
}
/**
  * print_int - prints integer
  * @args: arument passed
  * @sep: separator
  */
void print_int(va_list args, char *sep)
{
	int n = va_arg(args, int);

	printf("%s%d", sep, n);
}
/**
  * print_float - prints floats
  * @args: arument passed
  * @sep: separator
  */
void print_float(va_list args, char *sep)
{
	float n = va_arg(args, double);

	printf("%s%f", sep, n);
}
/**
  * print_char - prints characters
  * @args: arument passed
  * @sep: separator
  */
void print_char(va_list args, char *sep)
{
	char n = va_arg(args, int);

	printf("%s%c", sep, n);
}
