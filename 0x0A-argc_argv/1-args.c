#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: array of strings..
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
