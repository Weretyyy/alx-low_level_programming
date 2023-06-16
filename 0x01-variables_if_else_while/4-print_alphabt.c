#include <stdio.h>

/**
 *main - print lowercase alpha a-z but remove 'q' and 'e'
 *Return: Always 0 (Success)
 */

int main(void)
{
char x = 'a';
while (x <= 'z')
{
if ((x != 'q') && (x != 'e'))
{
putchar(x);
}
x++;
}
putchar('\n');
return (0);
}
