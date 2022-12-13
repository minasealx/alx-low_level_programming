#include "main.h"

/*
 * print_alphabet_x10 -Prints something
 * Return: 0 if its seccesful
 */

void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
_putchar('\n');
}
}
}
