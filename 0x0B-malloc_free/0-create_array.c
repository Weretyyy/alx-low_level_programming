#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: array size
 * @c: variable assigned
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	x = malloc(sizeof(char) * size);
	if (size == 0 || x == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		x[y] = c;
	}
	return (x);
}
