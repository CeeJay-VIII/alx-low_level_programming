#include "main.h"

/**
 *3-islower.c- checks for lowercase character
 *Return: 1 if c is lower 0 otherwise
 *@c:character to be checked
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
