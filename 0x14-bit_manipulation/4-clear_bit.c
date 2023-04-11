#include "main.h"

/*
 * clear_bit - this sets value of a given bit to zero
 *
 * @n: this is a pointer to the number to be changed.
 * @index: this represents the index of the bit.
 *
 * Return: 1 if successful, and -1 if failed.
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
/*
 * end of code.
 */
