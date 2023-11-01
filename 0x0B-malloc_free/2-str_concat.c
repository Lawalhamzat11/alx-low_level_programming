#include "main.h"

/**
 * _strlen - function to determine the length of a string
 * @c: the string passed as paramenter
 * Return: the length of a given string
 */
int _strlen(char  *c)
{
	int len = 0;

	while (c[len])
		len++;
	return (len);
}
/**
 * str_concat - concatenate two strings
 * @s1: string to be concatenated
 * @s2: string to e concatenated
 * Return: a pointer that contained the concantenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, j, k, m;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	i = _strlen(s1);
	j = _strlen(s2);

	new = malloc(sizeof(char) * (i + j) + 1);
	if (!new)
		return (NULL);
	for (k = 0; k < i; k++)
		new[k] = s1[k];
	for (k = i, m = 0; k < i + j; k++, m++)
		new[k] = s2[m];
	new[k] = '\0';
	return (new);
}
