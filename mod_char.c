#include "main.h"
/**
 * mod_character_s - search for match and execute for the associate function
 * @next: the character to match
 * @dino: the position of next
 * Return: funcion donde hace match y de no haberlo, NULL
**/
int (*mod_character_s(const char *next, int dino))(va_list)
{
	int i;
	spc_t options[] = {
		{"s", print_string},
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{"u", print_u_int},
		{"r", print_rev},
		{"R", print_rot13},
		{"o", print_octal},
		{NULL, NULL}
	};

	for (i = 0; options[i].match != NULL; i++)
		if (options[i].match[0] == next[dino])
			return (options[i].function);
	return (NULL);
}
