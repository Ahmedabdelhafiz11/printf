#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct special_cases - structure
 * @match: the special character to match after find a percentage
 * @function: the associated function to be called in each specialcase
*/

typedef struct special_cases
{
	char *match;
	int (*function)(va_list);
} spc_t;

/*format - print data*/
int _printf(const char *format, ...);

/*writes the character c */
int _putchar(char c);

/*search for match and execute the function */
int (*mod_character_s(const char *next, int dino))(va_list);

/*prints a char*/
int print_char(va_list c);

/*prints a string */
int print_string(va_list s);

/*prints a number*/
int print_int(va_list in);

/*prints a number converted to binary*/
int print_bin(va_list in);

#endif
