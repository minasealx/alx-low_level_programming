#include "main.h"
/**
 * *_strcat - here the program starts
 * @dest: string 1
 * @src: string 2
 * Return: values
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*dest[i] != '\0')
{
	*dest[j] = *dest[i];
	i++;
	j++
}
	while (*src[i] != '\0')
{
	*src[j] = *src[i];
	i++;
	j++;
}
*dest[j] = '\0';
return (*dest);

}
