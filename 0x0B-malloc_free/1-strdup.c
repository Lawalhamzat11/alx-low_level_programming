#include "main.h"
/**
 * _strdup - copies the content of the string given as parameter
 * @str: the string to be duplicateed
 * Return: NULL, or a pointer to a neew string thaaat has the duplicate of str
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	s = malloc((sizeof(char) * i) + 1);
	if (!s)
		return (NULL);
	j = 0;
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}

