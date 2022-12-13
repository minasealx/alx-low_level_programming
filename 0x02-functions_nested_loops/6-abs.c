#include <stdio.h>
#include "main.h"

/**
 * _abs - prints the absolute
 * @int: Is the int value to be compared with the ASCII value
 * Return: 0 if successful. _islower - Entry point
 */

int _abs(int)
{
int n;
if (n < 0)
{
n*=-1;
printf("%d", n);
}
else if (n >= 0)
{
printf("%d", n);
}
return (0);
}
