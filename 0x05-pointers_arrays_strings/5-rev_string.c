#include <stdio.h>
/**
 * _strlen - get the length of a string
 * @s: string to get length
 * Author: EngineerPhoenix
 * Return: length
 */
int _strlen(char *s)
{
	char *cpy;
	int length;

	for (cpy = s, length = 0; *cpy != '\0'; cpy++)
		length++;
	return (length);
}

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Author: EngineerPhoenix
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;

	for (i = 0, j = _strlen(s) - 1; i < j; j--, i++)
	{
		char c;

		c = *(s + j);
		s[j] = s[i];
		s[i] = c;
	}
}
