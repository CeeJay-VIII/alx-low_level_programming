#include "main.h"

/**
 * print_alphabet_x10- prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 */
void print_alphabet_x10(void)
{int i;
for (i = 1; i <= 10; i++)
{char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}
