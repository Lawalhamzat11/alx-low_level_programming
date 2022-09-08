#include <unistd.h>

/**
 * main -Entry point
 *
 * Description: using write function
 * this program print and that piece ofart is useful" - Dora Korpar, 2015-10-19
 * Return: 1 on Success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
