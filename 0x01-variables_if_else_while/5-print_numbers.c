#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using printf function
 * this program prints numbers ranging from 0-9
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
