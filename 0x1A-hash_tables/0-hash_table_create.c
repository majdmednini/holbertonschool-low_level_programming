#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_t *hash_table_create - function that creates a hash table
 *@size: size of the array
 *Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	hash_t =malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return
hash_t->size = size;
return (hash_t);
}
