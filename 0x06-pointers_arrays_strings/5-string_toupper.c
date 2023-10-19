#include "main.h"
/**
* string_topper - change all lowercase to uppercase
* @n: pointer
* Return: n
*/
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
