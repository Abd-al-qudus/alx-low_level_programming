#include "hash_tables.h"

/**
 * key_index - create a hash and return the
 * index of the key from djb2 algorithm
 * @key: string to hash
 * @size: size of the hash table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
