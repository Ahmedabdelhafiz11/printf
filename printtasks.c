#include "main.h"

/**
 * print_string - function that prints a string
 * @s: the variadic argument from the printf function
 * Return: amount of characters printed
**/
int print_string(va_list s)
{
	char *string;
	int i;

	string = va_arg(s, char *);
	if (string == NULL)
	{
		string = "(null)";
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	return (i);
}

/**
 * print_char - function that prints a character
 * @c: the variadic argument from the printf function
 * Return: amount of characters printed (one).
**/
int print_char(va_list c)
{
	char character = (char) va_arg(c, int);

	_putchar (character);

	return (1);
}

/**
 * print_int - prints integer
 * @in: argument to print
 * Return: number of characters printed
*/

int print_int(va_list in)
{
	int n = va_arg(in, int);
	int num, last = n % 10, digit, ex = 1;
	int  i = 1;

	n /= 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			ex *= 10;
			num /= 10;
		}
		num = n;
		while (ex > 0)
		{
			digit = num / ex;
			_putchar(digit + '0');
			num = num - (digit * ex);
			ex /= 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}

/**
 * print_bin - prints integer converted to bin
 * @in: argument to print
 * Return: number of characters printed
*/
int print_bin(va_list in)
{
	int count, ten, i, dig, n, num;
	int x = 0;

	n = va_arg(in, int);
	if (n != 0)
	{
		num = n;
		count = 0;
		while (num != 0)
		{
			num /= 2;
			count++;
		}
		ten = 1;
		for (i = 1; i <= count - 1; i++)
			ten *= 2;
		for (i = 1; i <= count; i++)
		{
			dig = n / ten;
			_putchar(digit + '0');
			count++;
			n -= dig * ten;
		  ten /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
