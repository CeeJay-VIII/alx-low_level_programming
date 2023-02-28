#include "main.h"

/**
 *puts2 - prints every other character of a string, starting with the first
 *followed ny newline
 *@str: string
 *Return:Nothing
 */
void puts2(char *str)
{
int length = 0;
int i = 0;
char *x = str;
int j;
while (*x != '\0')
{
x++;
length++;
}
i = length - 1;
for (j = 0 ; j <= i ; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
