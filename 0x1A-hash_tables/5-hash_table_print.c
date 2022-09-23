#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: Pointer to a hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cur;
	char comma = 0;
	unsigned long int idx;

	if (ht != NULL)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			cur = (ht->array)[idx];
			while (cur != NULL)
			{
				if (comma == 1)
					printf(", ");
				printf("'%s': '%s'", cur->key, cur->value);
				cur = cur->next;
				comma = 1;
			}
		}
		printf("}\n");
	}
}
