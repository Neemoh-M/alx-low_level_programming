#include "main.h"
/**
 * print sign- det if the input is
 * greater, equal or less
 *
 * @n:input number
 *
 * Return: 1 greater tahn 0
 * -1 less than zero
 */
int print_sign(int n)
{
	if (n > 0)
		{
		_putchar(43);
	return (1);
		}
	else if(n < 0)
		{
		_putchar(45);
	return (-1);
		}
	else
		{
		_putchar(48);
	return (0);
		}
		_putchar('\n');
}	
