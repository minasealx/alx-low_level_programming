#include "main.h"
/**
 * print_sign - checks its sign
 * @n: Is the int value to be compared with the ASCII value
 * Return: 0 if successful. _islower - Entry point
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
return (0);
}

