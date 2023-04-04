#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size : size of triangle
 * Return : void
 **/

void print_triangle(int size)
{
	int count = 0;
	int a = 0;
	int b;

	while (count < size)
	{
		b = size - 1 - count;
		while (a < size)
		{
			if (a < b)
				_putchar(' ');
			else
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
