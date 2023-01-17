#include "main.h"
/**
 *_isalpha - shows 1 if input is c
 * other cases, shows 0
 *
 * @c:characer is ASCII
 *
 * Return: 1 for letters and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
