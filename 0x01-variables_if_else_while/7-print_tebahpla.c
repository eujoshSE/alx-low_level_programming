#include <stdio.h>

/**
   * main - entry point of the program
   *
   * Return: Always 0
   */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
