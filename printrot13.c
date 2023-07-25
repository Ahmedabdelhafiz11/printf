#include "main.h"
#include <stdio.h>
/**
  * print_rot13 -convert a string into rot13.
  * @R: string to convert
  * Return: output text
  */
int print_rot13(va_list R)
{
	int i, j, count = 0;
	char *r;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	r = va_arg(R, char *);
	if (r == NULL)
		r = "(null)";
	for (i = 0; r[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (r[i] == input[j])
			{
				_putchar(output[j]);
				count++;
				break;
			}
		}
	}
	return (count);
}
