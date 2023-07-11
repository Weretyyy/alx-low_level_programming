#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: character variable
 * Return: 0
 */
char *_strdup(char *str)
{
	char *x;
	int y;
	int z;

	z = 0;
	y = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[y] != '\0')
	{
		y++;
	}
	x = malloc(sizeof(char) * (y + 1));
	if (x == NULL)
	{
		return (NULL);
	}
	for (z = 0; str[z]; z++)
	{
		x[z] = str[z];
	}
	return (x);
}
