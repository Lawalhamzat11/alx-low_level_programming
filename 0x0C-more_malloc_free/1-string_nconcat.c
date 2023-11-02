#include "main.h"
/**
 * string_nconcat - concantenates two strings
 * @s1: first string to be concatenated
 * @s2: string to be concantenated by n bytes
 * @n: bytes of s2 to be concantenated
 * Return: new allocated memoey of the concanted string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int len, index, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = strlen(s1);
	len = (n >= strlen(s2)) ? strlen(s2) : n;
	new = malloc((len + i + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	index = 0;
	while (index < len)
	{
		new[i] = s2[index];
		i++;
		index++;
	}
	new[i] = '\0';
	return (new);
}
