#include "main.h"
#include <stdio.h>

/**
 *print_array - prints n elements of an array of integers
 *@a:array to be printed
 *@n:number of elements in array
 *Return: Nothing (on Success)
 *
 */
void print_array(int *a, int n)
{
int count;
for (count = 0; count < (n - 1); count++)
{
printf("%d, ", a[count]);
}
if (count == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
