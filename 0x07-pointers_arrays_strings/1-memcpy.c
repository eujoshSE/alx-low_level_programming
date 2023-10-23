#include "main.h"
/**
* _memcpy - function copies n bytes from memory area
* @dest: storage memory
* @src: source to copy from
* @n: number of bytes
*
* Return: Returns a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
