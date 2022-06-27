#include"main.h"
#include<stdlib.h>
/**
 * create_array - Creates an array of chars and initializes
 *				it with a specific char.
 * @size : size of array to be initialized
 * @c: The specific char to intialize the array with.
 *
 * Return : if size == 0 or the function fails - NULL.
 * otherwise - a pointer to thr array .
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	array[index] = c;

	return (array);
}

