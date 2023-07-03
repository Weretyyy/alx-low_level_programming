#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int y;

	x = 0;
	y = n;
	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
