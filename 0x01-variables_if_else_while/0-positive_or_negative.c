#include <stdlib.h>
#include <time.h>
/**
 * main - main code
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%n is negative\n");
	}
	else if (n == 0)
	{
		printf("%n is zero\n");
	}
	else if (n > 0)
	{
		printf("%n is positive\n");
	}
	return (0);
}

