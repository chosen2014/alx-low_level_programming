#includ "main.h"
/**
 * main -prints the lower letter
 *
 * Description -  prints the lwer alphabet
 * Return: 0 always
 */
void print_alphabet(void)
{
	int j;

	for (j = "a"; j <= "z"; j++)
	{
		_putchar(j);
	}
	_putcar("\n");
}
