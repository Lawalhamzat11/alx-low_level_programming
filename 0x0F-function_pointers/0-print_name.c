#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointers to function that takes one char * as argument
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
