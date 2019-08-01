#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - Function to print anything elements given
 * as a parameters.
 * @format: The text with the format (c, s, d, i)
 *
 * Author: José Calderón
 * Description: A function to print various elements from
 * these formats: char (c), integer (i), float (f) and char*(s)
 * Return: void
 */
int _printf(const char *format, ...)
{
	va_list vl;
	op_list ol[] = {
		{'c', _pchar},
		{'s', _pstring},
		{'d', _pnumber}
	};
	unsigned int i = 0, k = 0;
	char t;

	va_start(vl, format);
	if (vl == NULL)
		return (0);
	for (i = 0; format[i] != '\0'; i++)
	{
		t = format[i];
		if (t == '%' && format[i + 1] == '%')
			i++;
		if (t == '%' && format[i + 1] == 'c')
		{
			k += ol[0].f(vl);
			i++;
			continue;
		}
		if (t == '%' && format[i + 1] == 's')
		{
			k += ol[1].f(vl);
			i++;
			continue;
		}
		if (t == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			k += ol[2].f(vl);
			i++;
			continue;
		}
		k += _putchar(t);
	}
	va_end(vl);
	return (k);
}
