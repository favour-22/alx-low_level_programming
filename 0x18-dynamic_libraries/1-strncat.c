#include "main.h"

/**
 *  _strncat - concatenates n bytes from a strings to another
 *  @dest: final string
 *  @src: orignal string
 *  @n: number of bytes of str to concatenate
 *  Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
