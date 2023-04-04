#include <stdio.h>

/**
 * main - highest prime factor
 * Return: success
 */

int main(void)
{
	long int n, i;
	n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%ld\n",i);
	return (0);
}
