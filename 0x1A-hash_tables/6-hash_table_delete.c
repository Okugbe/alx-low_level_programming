#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 *
 * Description: This function frees the memory allocated for a hash table
 *              and all its nodes, including keys and values.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_table_t *head = ht;
    hash_node_t *node, *tmp;
    unsigned long int i;

    /* Iterate through each slot in the hash table */
    for (i = 0; i < ht->size; i++)
    {
        /* If the slot is not empty */
        if (ht->array[i] != NULL)
        {
            node = ht->array[i];
            while (node != NULL)
            {
                tmp = node->next;
                free(node->key);
                free(node->value);
                free(node);
                node = tmp;
            }
        }
    }

    free(head->array);
    free(head);
}
