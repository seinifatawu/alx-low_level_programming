#include "main.h"

/**
 * get_endianness - this checks for if a machine is little / big endian
 * Return: 1 if little, and 0 if big.
 *
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
/*
 * end of code.
 */
