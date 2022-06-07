#include "stdio.h"

/**
 *  main - Print "_putchar" followed by a new line.
 *  Description: You are not allowed to include standard libraries.
 *  Return: 0
 */
int main(void)
{
	char *_putchar = "_putchar";

	while (*_putchar)
	{
		putchar(*_putchar);
		_putchar++;
	}
	putchar('\n');
	return (0);
}
