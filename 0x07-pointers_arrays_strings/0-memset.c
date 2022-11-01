#include "main.h"
#include <stdio.h>
/**
 * mem-set - finds a constant
 * @i - integer
 * simple_print_buffer - prints constant
 * Return: 0
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
