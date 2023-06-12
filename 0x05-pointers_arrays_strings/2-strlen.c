#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: string to get length
 * Author: EngineerPhoenix
 * Return: length of the string
 */
int _strlen(char *s)
{
	char *new;
	int length;

	for (new = s, length = 0; *new != '\0'; new++)
	{
		length++;
	}
	return (length);
}
