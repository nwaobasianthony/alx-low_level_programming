#include "main.h"

/**
 * _strlen_recursion - prints length of string
 *
 * @s: address to forst letter in string
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);

}
