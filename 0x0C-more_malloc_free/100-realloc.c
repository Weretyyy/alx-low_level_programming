#include <stdlib.h>
#include "main.h"
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	char *y;
	unsigned int z;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	x = malloc(new_size);
	if (!x)
		return (NULL);
	y = ptr;
	if (new_size < old_size)
	{
		z = 0;
		while (z < new_size)
		{
			x[z] = y[z];
			z++;
		}
	}
	if (new_size > old_size)
	{
		z = 0;
		while (z < old_size)
		{
			x[z] = y[z];
			z++;
		}
	}
	free(ptr);
	return (x);
}
