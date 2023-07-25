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
/**
 * print_octal - Prints a number in octal base
 * @o: List args
 * Return: Number of char printed
 */

int print_octal(va_list o)
{
	unsigned int len, powten, j, digit, n, num;
	int count = 0;

	n = va_arg(o, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 8;
			len++;
		}
		powten = 1;
		for (j = 1; j <= len - 1; j++)
			powten *= 8;
		for (j = 1; j <= len; j++)
		{
			digit = n / powten;
			_putchar(digit + '0');
			count++;
			n -= digit * powten;
			powten /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
}
