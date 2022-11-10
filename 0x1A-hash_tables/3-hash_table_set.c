#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table. Key collisions result in
 * the creation of a singly linkedlist at the index, with the newest value
 * added at the beginning of the list. If a key-value pair exist already, over
 * write the old value with the new value.
 *
 * @ht: Pointer to the hash table.
 * @key: The key inside the hash table.
 * @value: The corresponding value of the key.
 *
 * Return: 1 upon success, otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *v_copy, *k_copy;
	unsigned long int idx;
	hash_node_t *cur;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);

	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	cur = (ht->array)[idx];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			free(cur->value);
			cur->value = v_copy;
			return (1);
		}
		cur = cur->next;
	}
	k_copy = strdup(key);
	if (k_copy == NULL)
		return (0);

	cur = malloc(sizeof(hash_node_t));
	if (cur == NULL)
	{
		free(v_copy);
		free(k_copy);
		return (0);
	}
	cur->key = k_copy;
	cur->value = v_copy;
	cur->next = (ht->array)[idx];
	(ht->array)[idx] = cur;

	return (1);
}
