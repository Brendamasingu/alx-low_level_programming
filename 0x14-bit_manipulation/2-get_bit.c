#include "main.h"
/**
 * get_bit - gets the bit in index
 * @n: the number
 * @index: index number
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 53)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
