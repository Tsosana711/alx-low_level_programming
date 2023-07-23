#include "main.h"
/*
 * void print_alphabet_x10(void) - function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 */

void print_alphabet_x10(void)
{
int a = 0;
while (a < 10)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
a++;
}
}
