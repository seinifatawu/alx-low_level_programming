#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point of code
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
