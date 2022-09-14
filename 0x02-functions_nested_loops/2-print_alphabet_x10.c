#include "main.h"
/**
 * main -prints the lower letter
 *
 * Description - 2print_alphabet_x10 prints the lwer alphabet
 * Return: 0 always
 */
void print_alphabet_x10(void);
{
	int j;
	int x;

	for (x = 0; x <= 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putcar('\n');
	}
}
