#include "hash_tables.h"

/**
 * hash_djb2 - Takes a string and applies djb2 hashing alogorithm to get a hash
 * value of the string.
 *
 * @str: An unsigned char pointer to the string.
 *
 * Return: An unsigned long int value of the hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
