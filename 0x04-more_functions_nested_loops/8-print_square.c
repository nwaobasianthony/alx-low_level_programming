#include "main.h"

/**
 * print_square - print a square
 *
 * @size : size of square
 * Return : void
 **/

void print_square(int size)
{
	int count = 0;
	int a = 0;

	while (count < size)
	{
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		a = 0;
		count++;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
