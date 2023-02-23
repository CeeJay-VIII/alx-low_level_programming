#include "main.h"

/**
 *print_line - draws a straight line in the terminal
 *@n:is the number of times the character _ should be printed
 *Return: Always 0
 *
 *
 */
void print_line(int n)
{
int i;
for (i = 1; i <= n; i++)
{
if ((n > 0) && (n != 0))
{
_putchar('_');
}
else if ((n < 0) && (n == 0))
{
_putchar('\n');
}
}
_putchar('\n');
}
