#include "main.h"

/*
 * set_bit - this sets a bit at certain index to one.
 * @n: this is a pointer to the number to be changed
 * @index: the index of bit to be set to one
 *
 * Return: 1 if successful, -1 if failed.
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
/*
 * end of code.
 */
