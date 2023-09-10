#include"hash_tables.h"

/**
*hash_table_create-Afunctionthatcreatesahashtable
*@size:Thesizeofthearray
*
*Return:Ifanerroroccurs-NULL
*Otherwise-apointertothenewhashtable
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table_created;
unsigned long int i;

/*allocate space for hashtable*/
hash_table_created = malloc(sizeof(hash_table_t));
if (hash_table_created == NULL)
return (NULL);

hash_table_created->size = size;
hash_table_created->array = malloc(sizeof(hash_node_t *) * size);
if (hash_table_created->array == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
hash_table_created->array[i] = NULL;
}

return (hash_table_created);
}

