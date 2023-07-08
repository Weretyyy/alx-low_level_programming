#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints all arguments it receives.
 * @argc: contains the number of command line arguments
 * including the name of the program itself
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
