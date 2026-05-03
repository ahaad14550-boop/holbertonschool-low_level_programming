#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add (cannot be an empty string).
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	char *v_copy;
	unsigned long int idx;

	if (!ht || !key || !*key || !value)
		return (0);
	v_copy = strdup(value);
	if (!v_copy)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = v_copy;
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(v_copy);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new), free(v_copy);
		return (0);
	}
	new->value = v_copy;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
