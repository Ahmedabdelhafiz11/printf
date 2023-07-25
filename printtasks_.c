#include "main.h"
/**
 * print_u_int - Prints an unsigned number
 * @n: unsigned integer as input
 * Return: The amount of numbers printed
 */
int print_u_int(unsigned int n)
{
	int l, diviseur = 1;
	unsigned int num = n;

	l = 0;

	while(num / diviseur > 9)
		diviseur *= 10;

	while(div != 0)
	{
		l += _putchar('0' + num / diviseur);
		num %= diviseur;
		diviseur /= 10;
	}

	return (l);
}

