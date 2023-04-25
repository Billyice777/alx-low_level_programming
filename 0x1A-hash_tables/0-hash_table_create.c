#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the hash table to create.
 * Return: a pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int itr;
	hash_table_t *new_hash_table;

	if (size > 0)
	{
		new_hash_table = malloc(sizeof(hash_table_t));
		if (new_hash_table)
		{
			new_hash_table->size = size;
			new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
			if (new_hash_table)
			{
				for (itr = 0; itr < size; itr++)
					new_hash_table->array[itr] = NULL;
				return (new_hash_table);
			}
			free(new_hash_table);
			return (NULL);
		}
		return (NULL);
	}
	return (NULL);
}
