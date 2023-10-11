#include "main.h"

/**
* _isalpha - check if a character is alphabet
* @c: The character to be checked.
*
* Return: 1
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
