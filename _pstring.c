#include "holberton.h"

/**
 * _pstring - Function to print a string.
 * @vl: The va_list
 *
 * Author: José Calderón
 * Return: The character of the string printed
 */
int _pstring(va_list vl)
{
	int i = 0;
	char *s;

	s = "";
	s = va_arg(vl, char*);
	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i++]);
	}
	return (i);
}
