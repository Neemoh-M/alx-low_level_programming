#include "main.h"
/**
 *_islower - Shows 1 if lowercase
 *other cases 0
 *
 * @c: character is ASCII code
 * Return: 1 for lowercase. 0 for rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
