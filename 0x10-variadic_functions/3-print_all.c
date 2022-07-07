
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@favour-22 
kiminzajnr
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
alx-low_level_programming/0x10-variadic_functions/3-print_all.c
@kiminzajnr
kiminzajnr prints anything
Latest commit 39f7d4d on 12 Mar 2021
 History
 1 contributor
42 lines (40 sloc)  784 Bytes

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: types of arguments passed to the function.
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	unsigned int i = 0;
	char *s;

	va_start(arguments, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(arguments, int));
				break;
			case 'i':
				printf("%d", va_arg(arguments, int));
				break;
			case 'f':
				printf("%f", va_arg(arguments, double));
				break;
			case 's':
				s = va_arg(arguments, char *);
				printf("%s", s != NULL ? s : "(nil)");
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
}
