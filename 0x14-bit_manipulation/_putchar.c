#include "main.h"
#include <unistd.h>
/**
 * _putchar - it writes a character c to the stdout.
 * @c: This is the character to be printed.
 *
 * Return: 1 if successful.
 * 	if error, returns -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
