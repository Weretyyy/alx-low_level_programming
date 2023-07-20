#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * @...: numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int y;

	va_start(x, n);
	y = 0;
	while (y < n)
	{
		printf("%d", va_arg(x, int));
		if (y != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		y++;
	}
	printf("\n");
	va_end(x);
}
