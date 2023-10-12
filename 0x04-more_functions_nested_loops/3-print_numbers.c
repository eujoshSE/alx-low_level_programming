#include "main.h"

/**
  * print_numbers - checks for numbers from 0-9
  * Return: always 0
  */

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
		_putchar('\n');
}
