#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/**
 * main - entry of main code
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
