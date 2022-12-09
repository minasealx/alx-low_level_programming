#include <stdio.h>

/**
 * main -  prints all possible different combinations of three digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
int ones = '0';
int ten = '0';
int hundreds = '0';

for (hundreds = '0'; hundreds <= '9'; hundreds++)
{
for (ten = '0'; ten <= '9'; ten++)
{
for (ones = '0'; ones <= '9'; ones++)
{
if (!((ones == ten) || (ten == hundreds) || (ten > ones) || (hundreds > ten)))
{
putchar(hundreds);
putchar(ten);
putchar(ones);
if (!(ones == '9' && hundreds == '7' && ten == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
