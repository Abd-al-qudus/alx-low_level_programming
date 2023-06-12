#include "main.h"
/**
 * _strcpy - copy string from source to destination
 * @dest: destination
 * @src: source
 * Author: EngineerPhoenix
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *cpy;

	cpy = dest;
	for (; *src != '\0'; src++, cpy++)
		*cpy = *src;
	*cpy = '\0';
	return (dest);
}
