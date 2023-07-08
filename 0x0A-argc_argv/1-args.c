#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: contains the number of command line arguments, including
 * the name of the program itself
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
