#include "main.h"
#include <stdlib.h>

/**
 * astostr - Concatenates all arguments of the program
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *astostr(int ac, char **av)
{
	char *str;
	int a, b, ind, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	ind = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[ind++] = av[a][b];

		str[ind++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
