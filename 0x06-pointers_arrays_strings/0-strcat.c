#include "main.h"

/**
* strcat - Concatenates two strings
* @dest: A pointer to the string.
* @src: The source string 
* Return: A pointer to the resulting string dest.
*/
char *strcat(char *dest, const char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
