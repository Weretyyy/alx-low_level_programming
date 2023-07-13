#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum range of values store
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *x;
	int y;
	int z;

	if (min > max)
	{
		return (NULL);
	}
	z = max - min + 1;
	x = malloc(sizeof(int) * z);
	if (x == NULL)
	{
		return (NULL);
	}
	y = 0;
	while (min <= max)
	{
		x[y] = min++;
		y++;
	}
	return (x);
}
