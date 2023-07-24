#include "main.h"
/**
 * print_char - prints a character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
*/
int print_char(va_list l, specs_t *p)
{
	(void)p;
	_putchar(va_arg(l, int));
	return (1);
}
