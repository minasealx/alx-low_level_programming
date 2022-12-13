#include "main.h"

/**
 * _islower - starts here
 * @c: Will be cheacked
 * Return: 0 if its right
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar ('\n');
return (0);
}
