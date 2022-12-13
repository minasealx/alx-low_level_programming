#include "main.h"

/**
 * _isalpha - starts here
 * @c: Will be cheacked
 * Return: 0 if its right
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
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
