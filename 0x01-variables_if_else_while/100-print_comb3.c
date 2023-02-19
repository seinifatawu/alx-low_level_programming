#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
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
			if (a + b != 17)
			{
			putchar(',');
			}
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
