#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int l = 0;

	while (s1 && s1[k])
	{
		k++;
	}
	while (s2 && s2[l])
	{
		l++;
	}
	if (n < l)
	{
		x = malloc(sizeof(char) * (k + n + 1));
	}
	else
	{
		x = malloc(sizeof(char) * (k + l + 1));
	}
	if (!x)
	{
		return (NULL);
	}
	while (i < k)
	{
		x[i] = s1[i];
		i++;
	}
	while (n < l && i < (k + n))
	{
		x[i++] = s2[j++];
	}
	x[i] = '\0';
	return (x);
}
