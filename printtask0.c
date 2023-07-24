#include "main.h"
/**
 * print_string
 * @s: the variadic argument from the printf function
 * Return: amount of characters printed
 **/
int print_string(va_list s)
{
	char *strng;
	int index;

	strng = va_arg(s, char *);
	if (strng == '\0')
	{
		string = "(null)";
	}
	for (index = 0; strng[index] != '\0'; index++)
	{
		_putchar(strng[index]);
	}
	return (index);
}
/**
 *print_char
 *@c: the variadic argument from the printf function
 *Return: amount of characters printed (one).
**/
int print_char(va_list c)
{
	char character = (char) va_arg(c, int);

	_putchar (character);

	return (1);
}
