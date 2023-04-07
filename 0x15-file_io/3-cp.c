#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/*
 * create_buffer - allocates 1024 bytes for buffer.
 *
 * Return: a pointer to the allocated buffer.
 */

