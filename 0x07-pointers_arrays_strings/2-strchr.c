#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: is a string
 * @c: first occurrance of the character
 *
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
