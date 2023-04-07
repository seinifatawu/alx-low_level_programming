#include "main.h"
#include <stdio.h>
#include <stdlib.h>

// Function declaration
char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates memory for a buffer.
 * @file: The name of the file that the buffer will store characters for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
int close_return_value;
close_return_value = close(fd);
if (close_return_value == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Copies the contents of one file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;

/* Check if number of arguments is correct
*/
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

/* Allocate memory for buffer
*/
buffer = create_buffer(argv[2]);

/* Open the source file
*/
from = open(argv[1], O_RDONLY);

/* Read data from the source file into the buffer
*/
r = read(from, buffer, 1024);

/* Open the destination file
*/
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

/* Write the contents of the buffer to the destination file
*/
do {
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

w = write(to, buffer, r);

if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

/* Read more data from the source file into the buffer
*/
r = read(from, buffer, 1024);

/* Open the destination file in append mode
*/
to = open(argv[2], O_WRONLY | O_APPEND);

} while (r > 0);

/* Free the buffer memory and close the files
*/
free(buffer);
close_file(from);
close_file(to);

return (0);
}
