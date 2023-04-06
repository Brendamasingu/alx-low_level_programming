#include "main.h"


/**
 * get_bit - returns the value of a bit ata given index
 * @n: number to search for the bit
 * @index: position to look for bit
 * Return: value of the bit at index, or -1 if an error ocurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
