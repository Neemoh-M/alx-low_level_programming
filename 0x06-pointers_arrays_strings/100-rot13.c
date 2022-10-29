#include "main.h"


/**
 * rot13 - encodes characters in rot13
 * @str: the string to be encoded
 * @Return: the rot13 values
 */

char *rot13(char *str)
{
	char ori[] = ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz;
	char new[] = NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm;
	int m;
	int n;

	while (*str != '\0')
	{
		for (m = 0; ori[m] != '\0'; m++)
		{
			for (n = 0; new[m] != '\0'; n++)
			{
				if (str[m] == ori[m])
				{
					str[m] = new[n];
				}
			}
		}
		str++;
	}
return (str);
}
