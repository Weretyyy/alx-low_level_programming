#include "main.h"
/**
 * _memset - function that fills the first n bytes of the memory area
 * pointed to by s with constant byte b
 * @s: pointer that returns the memory area
 * @b: constant byte
 * @n: number of bytes to be changed
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
