#include <stdio.h>
#include "main.h"
/**
 * _atoi - a program that multiplies two numbers
 * @s: string
 *
 * Return: converted string
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int n = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && m == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			n = s[i] - '0';
			if (j % 2)
				n = -n;
			k = k * 10 + n;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}
	if (m == 0)
		return (0);
	return (k);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}

	y = _atoi(argv[1]);
	z = _atoi(argv[2]);
	x = y * z;

	printf("%d\n", x);
	return (0);
}
