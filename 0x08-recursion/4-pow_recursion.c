#include "main.h"

/**
 *_pow_recursion - function that returns x^y
 *
 *@x: first integer
 *
 *@y:second integer
 *
 *Return: Value of x raised to the power y
 *
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
if (y % 2 == 0)
{
int half;
half = _pow_recursion(x, y / 2);
return (half * half);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
