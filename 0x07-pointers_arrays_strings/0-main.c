#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hex
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: void.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int a;

        b = 0;
        while (b < size)
        {
                if (b % 10)
                {
                        printf(" ");
                }
                if (!(b % 10) && b)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}


