#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @g: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int g)
{
	unsigned int numberbits;

	for (numberbits = 0; n || g; n >>= 1, g >>= 1)
	{
		if ((n & 1) != (g & 1))
			numberbits++;
	}

	return (numberbits);
}
