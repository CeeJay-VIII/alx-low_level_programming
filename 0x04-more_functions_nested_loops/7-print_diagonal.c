#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the termina
 *Return: Always 0
 *@n:n is the number of times the character \ should be printed
 *
 *
 */
void print_diagonal(int n)
{
int  i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == 1)
{
_putchar('\\');
}
else if (j < i)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
