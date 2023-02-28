#include "main.h"

/**
 *swap_int - swaps two integers
 *@a:first number
 *@b:second number
 *
 *Return:Nothing on success
 *
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
