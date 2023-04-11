#include "main.h"

/*
 * get_bit - this code returns the value of a bit.
 * @n: this represents the number to be searched.
 * @index: this represents the index of the bit.
 *
 * Return: returns the value of the bit.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
/*
 * end of code.
 */
