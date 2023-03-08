#include "main.h"

int _actual_sqrt(int n, int i);
/**
 *_sqrt_recursion-function that returns the natural square root of a number
 *
 *@n:integer Number
 *
 *Return:Square Root of n
 *
 *Otherwise: -1
 *
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_actual_sqrt(n, 0));
}
}
/**
 *_actual_sqrt - function to help recursion
 *
 *@n:integer Number
 *
 *@i:iterator
 *
 *Return: Square Root
 *
 */
int _actual_sqrt(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (_actual_sqrt(n, i + 1));
}
