#include "main.h"
#include <stdlib.h>
/**
 * count_word - function to count the number of words in a string
 * @s: string
 * Return: 0
 */
int count_word(char *s)
{
	int x, y;
	int z;

	x = 0;
	z = 0;
	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
			x = 0;
		if (x == 0)
		{
			x = 1;
			z++;
		}
	}
	return (z);
}
/**
 * strtow - function that splits a string into words.
 * @str: string
 * Return: NULL
 */
char **strtow(char *str)
{
	char **x;
	char *y;
	int i;
	int j = 0;
	int k = 0;
	int l;
	int m = 0;
	int n, o;

	while (*(str + k))
		k++;
	l = count_word(str);
	if (l == 0)
		return (NULL);
	x = (char **)malloc(sizeof(char *) * (l + 1));
	if (x == NULL)
		return (NULL);
	for (i = 0; i <= k; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (m)
			{
				o = i;
				y = (char *)malloc(sizeof(char) * (m + 1));
				if (y == NULL)
					return (NULL);
				while (n < o)
					*y++ = str[n++];
				*y = '\0';
				x[j] = y - m;
				j++;
				m = 0;
			}
		}
		else if (m++ == 0)
			n = i;
	}
	x[j] = NULL;
	return (x);
}
