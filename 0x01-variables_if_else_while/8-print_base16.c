#include <stdio.h>
/**
 * main - prints alphabet
 * Return: ends the program
 */

int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar (i);
}
for (i = 97; i < 103; i++)
{
putchar (i);
}
putchar (10);

return (0);
}
