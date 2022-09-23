#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table by freeing up memory and setting
 * the `ht` to NULL.
 *
 * @ht: Pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur, *nxt;
	unsigned long int idx;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		cur = (ht->array)[idx];
		while (cur != NULL)
		{
			nxt = cur->next;
			free(cur->key);
			free(cur->value);
			free(cur);
			cur = nxt;
		}
	}
	free(ht->array);
	free(ht);
}
