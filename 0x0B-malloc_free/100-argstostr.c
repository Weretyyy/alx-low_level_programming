#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: variable input
 * @av: array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int w;
	int x;
	int y = 0;
	int z = 0;
	char *i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < ac; w++)
	{
		for (x = 0; av[w][x]; x++)
		{
			z++;
		}
	}
	z += ac;
	i = malloc(sizeof(char) * z + 1);
	if (i == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < ac; w++)
	{
		for (x = 0; av[w][x]; x++)
		{
			i[y] = av[w][x];
			y++;
		}
		if (i[y] == '\0')
		{
			i[y++] = '\n';
		}
	}
	return (i);
}
