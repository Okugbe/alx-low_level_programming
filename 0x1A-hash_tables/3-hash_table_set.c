#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new;        /* New node to be added */
    char *value_copy;        /* Copy of the value string */
    unsigned long int index, i;

    /* Check for invalid inputs */
    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    /* Create a copy of the value string */
    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    /* Calculate the index of the key in the hash table */
    index = key_index((const unsigned char *)key, ht->size);

    /* Search for the key in the hash table */
    for (i = index; ht->array[i]; i++)
    {
        /* If the key already exists, update its value */
        if (strcmp(ht->array[i]->key, key) == 0)
        {
            free(ht->array[i]->value);
            ht->array[i]->value = value_copy;
            return (1);
        }
    }

    /* Key does not exist, create a new node */
    new = malloc(sizeof(hash_node_t));
    if (new == NULL)
    {
        free(value_copy);
        return (0);
    }
    new->key = strdup(key);
    if (new->key == NULL)
    {
        free(new);
        return (0);
    }
    new->value = value_copy;
    new->next = ht->array[index];
    ht->array[index] = new;

    return (1);
}

