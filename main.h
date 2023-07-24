#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct printhandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @s: format specifier
 * @p: pointer to the correct printing function
 */
typedef struct printhandler
{
	char s;
	int (*p)(va_list ap, specs_t *p);
} ph;

/* _printf */

/* print_sting */
int print_string(va_list l, specs_t *p);
/* Print_char */
int print_char(va_list l, specs_t *p);
/* print_percent */
int print_percent(va_list l, specs_t *p);

#endif
