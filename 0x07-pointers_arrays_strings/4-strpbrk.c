#include "main.h"

/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: string to be searched.
* @accept: set of bytes to be searched for.
*
* Return: a pointer to the matched byte. Else NULL.
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	
		s++;
	}

	return ('\0');
}
