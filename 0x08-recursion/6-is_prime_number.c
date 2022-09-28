#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return:	If the number is divisible - 0.
 *		If the number is not divisible - 1.
 */

int is_divisible(int num, int div)
{
	if (i < num)
	{
		if (num % div == 0)
		{
			return (0);
		}
		else
		{
			return (is_divisible(num, i + 1));
		}
	}
	else
	{
		return (i);
	}
}

/**
 * is_prime_number - checks if number is prime or not.
 * @num: number to be checked.
 *
 * Return: 1 if number is prime.
 * 0 if number is not prime.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_divisible(n, 2));
	}
}
