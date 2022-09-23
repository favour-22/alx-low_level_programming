#include "hash_tables.h"

/**
 * key_index - Returns an index for a hash table based on the hash of the key.
 *
 * @key: unsigned char pointer to a string.
 * @size: Size of the array of the hash table.
 *
 * Return: The index corresponding to the hash of the key in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key) % size));
}
