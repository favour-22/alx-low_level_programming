#include <stdio.h>
/**
 * main-print all the alphabet in lowerr case 
 *
 * Return -always 0
 */
int main(void)
{
	 char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
 		putchar(letter);
	
	putchar('\n');

	return (0);
}
