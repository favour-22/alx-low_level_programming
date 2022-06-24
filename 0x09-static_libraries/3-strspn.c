#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, flag;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		flag = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (c);
		}
	}

	return (0);
}
