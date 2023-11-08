#include "3-calc.h"
/**
 * main - Entry point for a calculator program
 * @argv: array of strings
 * @argc: count of argument
 * Return: 0 on successful completion.
 */
int main(int argc, char **argv)
{
	int result = 0;
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);
	return (0);

}
