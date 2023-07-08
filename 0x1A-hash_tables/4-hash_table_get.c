#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with the key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *node;
    unsigned long int index;

    /* Check for invalid inputs */
    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    /* Calculate the index of the key in the hash table */
    index = key_index((const unsigned char *)key, ht->size);

    /* Ensure the calculated index is within the valid range */
    if (index >= ht->size)
        return (NULL);

    /* Search for the key in the linked list at the calculated index */
    node = ht->array[index];
    while (node && strcmp(node->key, key) != 0)
        node = node->next;

    /* Return the value associated with the key if found, otherwise NULL */
    return ((node == NULL) ? NULL : node->value);
}

