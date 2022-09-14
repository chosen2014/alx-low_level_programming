#include "main.h"
/**
 * main - Entry
 * Description: print_alphabet prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: 0 always
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
