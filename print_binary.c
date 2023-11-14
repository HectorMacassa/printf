#include "main.h"
/**
 * print_bin - converts unsigned int to  a binary
 *@val: arguments
 *
 * Return: int
 */
int print_bin(va_list val)
{
	int flag = 0;
	int count = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int n;

	for (i = 0; i < 32; i++)
	{
		n = ((a << (32 - i)) & num);
		if (n >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = n >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
