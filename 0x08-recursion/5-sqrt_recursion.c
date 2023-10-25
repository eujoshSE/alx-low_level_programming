#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
* find_sqrt - Finds the sqrt root of a number.
* @num: The number to find the sqrt root of.
* @root: The root to be tested.
*
* Return: has a sqrt root - the sqrt root. Else - -1.
*/
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
* _sqrt_recursion - Returns the sqrt root of a number.
* @n: The number to return the sqrt root of.
*
* Return: If n has a sqrt root - the sqrt root of n. Else - -1.
*/
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
