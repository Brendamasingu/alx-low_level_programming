#include "main.h"

/**
 * flips_bits - counts the number to bits to change
 * to get from one number to another.
 * @n: first number.
 * @m: second number.
 * Return: the number of the bits you would need to flip
 * to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count = 0;

	xor_result = n ^ m;

	while (xor_result)
	{
		count += (xor_result & 1);
		xor_result >>= 1;
	}

	return (count);
}
