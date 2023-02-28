#include "main.h"

/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: Strring
 *Return:0
 *
 */
void print_rev(char *s)
{
int reverse = 0;
int j;
while (*s != '\0')
{
reverse++;
s++;
}
s--;
for (j = reverse; j > 0; j--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
