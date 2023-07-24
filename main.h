#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct specs - struct containing flags to "turn on"
 * when a specifier is passed to _printf()
 * @space: stand for the ' ' character 
 * @plus: stand for the '+' character
 * @hash: stand for the '#' character
 */
typedef struct specs
{
	int space;
	int plus;
	int hash;
      
} specs_t;

/**
 * struct printhandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @s: format specifier
 * @p: pointer to the correct printing function
 */
typedef struct printHandler
{
	char s;
	int (*p)(va_list ap, specs_t *p);
} ph;

/* print_nums */
int print_int(va_list l, specs_t *p);
void print_number(int n);
int print_unsigned(va_list l, specs_t *p);
int count_digit(int i);

/* print_bases */
int print_hex(va_list l, specs_t *p);
int print_hex_big(va_list l, specs_t *p);
int print_binary(va_list l, specs_t *p);
int print_octal(va_list l, specs_t *p);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);

/* get_flag */
int get_flag(char s, flags_t *f);

/* print_alpha */
int print_string(va_list l, specs_t *p);
int print_char(va_list l, specs_t *p);

/* write_funcs */
int _putchar(char s);
int _puts(char *str);

/* print_custom */
int print_rot13(va_list l, specs_t *p);
int print_rev(va_list l, specs_t *p);
int print_bigS(va_list l, specs_t *p);

/* print_address */
int print_address(va_list l, specs_t *p);

/* print_percent */
int print_percent(va_list l, specs_t *p);

#endif
