#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The coverted number, or 0 if there is one or more chars in
 * the string b that is not 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			uint <<= 1;
			uint += *b - '0';
			b++;
		}
		else
		{
			return (0);
		}
	}

	return (uint);
}