#include "main.h"
/**
 * print_percent - prints a percent
 * @l: va_list arguments from _printf
 * @p: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */
int print_percent(va_list l, specs_t *p)
{
	(void)l;
	(void)p;
	return (_putchar('%'));
}
