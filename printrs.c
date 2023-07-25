#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
*print_rev - prints reversed string
*@rs: string to print
*Return: number of chars printed
*/
int print_rev(va_list rs)
{
	char *st;
	int i, j = 0;

	st = va_arg(rs, char *);
	if (st == NULL)
		st = ")llun(";
	for (i = 0; st[i] != '\0'; i++)
		;
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(st[i]);
		j++;
	}
	return (j);
}
