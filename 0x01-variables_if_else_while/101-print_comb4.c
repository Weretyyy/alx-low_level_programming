#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
int x;
int y;
int z;
for (z = '0'; z <= '9'; z++) /*z place*/
{
for (y = (z + 1); y <= '9'; y++) /*y=100s+1*/
{
for (x = (y + 1); x <= '9'; x++) /*x*/
{
putchar(z);
putchar(y);
putchar(x);
if (z != '7' || y != '8' || x != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
