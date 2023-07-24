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
 *print_char - function that prints a character
 *@c: the variadic argument from the printf function
 *Return: amount of characters printed (one).
**/
int print_char(va_list c)
{
	char character = va_arg(c, char);

	_putchar (character);

	return (1);
}

/**
 * print_number - prints the input number
 * @num: input
*/
void print_number(va_list n)
{
int num = (int *) va_arg(n, int);

if (num < 0)
{
	_putchar(45);
	num = -num;
}
if ((num / 10) > 0)
	print_number(num / 10);

_putchar(48 + (num % 10));
}
