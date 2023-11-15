#ifndef MAIN_HEADER
#define MAIN_HEADER
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct format
{
	char *id;
	int (*f)();
}match;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int printf_dec(va_list args);
int printf_int(va_list args);
int print_bin(va_list val);
int printf_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_hexa(va_list val);
int print_HEX_extra(unsigned int num);
int print_string_exc(va_list val);
int print_hex_extra(unsigned long int num);
int print_pointer(va_list val);
int print_rev(va_list val);
int print_rot13(va_list val);

#endif
