#include "main.h"
/**
 * _printf - custom implemtation of printf function
 * @format: format string containing format specifiers
 *
 * Return: number of characters printedi
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_37},
		{"%d", printf_dec}, {"%i", printf_int}, {"%r", print_rev},
		{"%R", print_rot13}, {"%b", print_bin}, {"%u", printf_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_hexa},
		{"%S", print_string_exc}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
