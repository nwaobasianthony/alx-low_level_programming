#include "main.h"

/**
 * more_numbers - Print numbers
 * Return: 0
 */

void more_numbers(void)
{
	int n = 0;

	while (n <= 14)
	{
		if (n >= 10)
			_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		n++;
	}

	_putchar('\n');
}
