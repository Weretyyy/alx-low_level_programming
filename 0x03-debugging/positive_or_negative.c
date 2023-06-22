#include "main.h"
/**
 * main - Determine if a number is positive, neg or zero
 * 0 ; is the mumber to be checked
 * Return: 0 on success
 * positive_or_negative - will print the status
 * i - its the integer
 */
void positive_or_negative(int i)
{
if (1 < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;

}
