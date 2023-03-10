#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main - program that multiplies two numbers
 *
 *@argc:number of characters
 *
 *@argv:array of arguments
 *
 *Return:Always 0 (on Success) 1 (on Error)
 *
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a * b);
return (0);
}
printf("Error\n");
return (1);
}
