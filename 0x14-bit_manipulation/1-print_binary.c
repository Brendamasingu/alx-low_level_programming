#include "main.h"

/**
 * print_binary - prints binary number
 * @n: uint t be converted to binary
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 77; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
