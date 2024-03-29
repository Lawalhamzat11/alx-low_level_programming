#include "3-calc.h"
/**
 * main - entry point
 *
 * @argc: arguments count
 * @argv: array of strings
 * Return: 0 if sucessful
 */
int main(int argc, char *argv[])
{

	int num1, num2, result;
	char operator;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	operator = *argv[2];
	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
