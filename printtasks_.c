#include "main.h"
/**
 * print_u_int - Prints an unsigned number
 * @in: arg input
 * Return: The amount of numbers printed
 */
int print_u_int(va_list in)
{
	unsigned int n, num;
	int l, diviseur = 1;

	n = va_arg(in, unsigned int);
	num = n;
	l = 0;

	while (num / diviseur > 9)
		diviseur *= 10;

	while (diviseur != 0)
	{
		l += _putchar('0' + num / diviseur);
		num %= diviseur;
		diviseur /= 10;
	}

	return (l);
}
