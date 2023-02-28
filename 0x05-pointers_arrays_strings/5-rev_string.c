#include "main.h"

/**
 *rev_string - prints string in reverse
 *@s: string
 *Reeturn: string in reverse
 */

void rev_string(char *s)
{
char reverse = s[0];
int counter = 0;
int j;
while (s[counter] != '\0')
{
counter++;
}
for (j = 0; j < counter; j++)
{
counter--;
reverse = s[j];
s[j] = s[counter];
s[counter] = reverse;
}
}
