#include <stdio.h>

/**
 *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int x;
int y;
for (y = '0'; y <= '9'; y++) /*increment variable y*/
{
for (x = (y + 1); x <= '9'; x++) /*one's ten+1*/
{
putchar(y);
putchar(x);
if (y != '8' || x != '9') /*print commas*/
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}}
