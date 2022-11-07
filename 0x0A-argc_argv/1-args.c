#include <stdio.h>
/**
 * main - Prints all the args content
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{	int counter;

	for (counter = 0; counter < argc; counter++)
	printf("%s\n", argv[counter]);
	return (0);
}
