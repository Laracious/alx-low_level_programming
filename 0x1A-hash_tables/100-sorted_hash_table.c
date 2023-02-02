#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table with a given size
 * @size: the size of the hash table
 *
 * Return: pointer to the newly created hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);
    ht->array = calloc(size, sizeof(shash_node_t *));
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }
    ht->size = size;
    ht->shead = NULL;
    ht->stail = NULL;
    return (ht);
}

/**
 * shash_table_set - adds a key/value pair to a hash table
 * @ht: the hash table
 * @key: the key to add
 * @value: the value to add
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *node, *tmp;
    unsigned long int index;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);
    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];
    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
        {
            free(node->value);
            node->value = strdup(value);
            return (1);
        }
        node = node->next;
    }
    node = malloc(sizeof(shash_node_t));
    if (node == NULL)
        return (0);
    node->key = strdup(key);
    if (node->key == NULL)
    {
        free(node);
        return (0);
    }
    node->value = strdup(value);
    if (node->value == NULL)
    {
        free(node->key);
        free(node);
        return (0);
    }
    node->next = ht->array[index];
    ht->array[index] = node;
    node->sprev = ht->stail;
    node->snext = NULL;
    if (ht->stail != NULL)
        ht->stail->snext = node;
    if (ht->shead == NULL)
        ht->shead = node;
    ht->stail = node;
    return (1);
}

/**
 * shash_table_get - retrieves a value associated with a given key in a hash table
 * @ht: the hash table
 * @key: the key to search for
 *
 * Return: the value associated with the key, or NULL if key is not found
 */
char *sh

