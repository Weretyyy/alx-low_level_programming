#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: functions
 * @...: sum
 * Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list w;
	unsigned int x;
	int sum;

	sum = 0;

	va_start(w, n);
	x = 0;
	while (x < n)
	{
		sum += va_arg(w, int);
		x++;
	}
	va_end(w);
	return (sum);
}
