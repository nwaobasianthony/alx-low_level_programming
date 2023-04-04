#include <stdio.h>

/**
 * main - highest prime factor
 * Return: success
 */

int main(void)
{
	unsigned long n, i;

	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%lu\n", i - 1);
	return (0);
}
