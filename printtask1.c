#include "main.h"
/**
 * printf_int - prints integer
 * @in: argument to print
 * Return: number of characters printed
*/
int printf_int(va_list in)
{
        int n = va_arg(in, int);
        int num, last = n % 10, digit, ex = 1;
        int  x = 1;

        n /= 10;
        num = n;

        if (last < 0)
        {
                _putchar('-');
                num = -num;
                n = -n;
                last = -last;
                x++;
        }
        if (num > 0)
        {
                while (num / 10 != 0)
                {
                        ex *= 10;
                        num /= 10;
                }
                num = n;
                while (ex > 0)
                {
                        digit = num / ex;
                        _putchar(digit + '0');
                        num = num - (digit * ex);
                        ex /= 10;
                        x++;
                }
        }
        _putchar(last + '0');
        return (x);
}
/**
 * printf_dec - prints decimal
 * @de: argument to print
 * Return: number of characters printed
 */

int printf_dec(va_list de)
{
        int n = va_arg(de, int);
        int num, last = n % 10, digit;
        int  x = 1;
        int ex = 1;

        n /= 10;
        num = n;

        if (last < 0)
        {
                _putchar('-');
                num = -num;
                n = -n;
                last = -last;
                x++;
        }
        if (num > 0)
        {
                while (num / 10 != 0)
                {
                        ex *= 10;
                        num /= 10;
                }
                num = n;
                while (ex > 0)
                {
                        digit = num / ex;
                        _putchar(digit + '0');
                        num = num - (digit * exp);
                        ex /= 10;
                        x++;
                                                     x++;
                }
        }
        _putchar(last + '0');

        return (x);
}
