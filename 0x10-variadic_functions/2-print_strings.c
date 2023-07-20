#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * @...: functions
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	char *y;
	unsigned int z;

	va_start(x, n);
	z = 0;
	while (z < n)
	{
		y = va_arg(x, char *);
		if (y == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", y);
		}
		if (z != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		z++;
	}
	printf("\n");
	va_end(x);
}
