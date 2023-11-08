#include "3-calc.h"
/**
 * get_op_func - Returns a function based on the given operator
 * @s: operator
 * Return: Pointer to the specific operation function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
	}
	printf("Error\n");
	exit(99);

}
