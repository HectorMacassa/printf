#include "main.h"
/**
 * _strlen - returns length of string
 * @str: string pointer
 *
 * Return: i
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
/**
 * _strlenc - strlen function for constant char pointer string
 * @str: char pointer
 *
 * Return: i
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
