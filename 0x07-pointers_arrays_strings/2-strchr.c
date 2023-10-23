#include "main.h"
/**
* _strchr - check a character in a string
* @s: string to check
* @c: character to check
*
* Return: Returns a pointer to the first occurrence
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

