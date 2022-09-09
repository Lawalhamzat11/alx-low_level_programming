#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: using time.h header filer
 * program assign a random number to the variable n each time it is executed
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d \n", n);

	if (n > 0)
	{
		printf("The number is positive \n");
	}
	else if (n < 0)
	{
		printf("The number is negative \n");
	}
	else
	{
		printf("The number is zero \n");
	}

	return (0);
}
