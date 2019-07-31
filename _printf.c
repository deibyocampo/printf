#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - Function to print anything elements given
 * as a parameters.
 * @format: The text with the format (c, i, f, s)
 *
 * Author: José Calderón
 * Description: A function to print various elements from
 * these formats: char (c), integer (i), float (f) and char*(s)
 * Return: void
 */
int _printf(const char *format, ...)
{
	va_list vl;
	unsigned int i = 0, j = 0, k = 0;
	char t, *s;

	va_start(vl, format);
	while (format[i] != '\0')
	{
		t = format[i];
		if (t == '%' && format[i + 1] == '%')
			i++;
		if (t == '%' && format[i + 1] == 'c')
		{
			t = (char)va_arg(vl, int);
			i++;
		}
		if (t == '%' && format[i + 1] == 's')
		{
			s = va_arg(vl, char*);
			j = 0;
			while (s[j] != '\0')
			{
				_putchar(s[j]);
				k++;
				j++;
			}
			i += 2;
			continue;
		}
		if (t == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			printnumber(&k, vl, &i);
			continue;
		}
		_putchar(t);
		i++;
		k++;
	}
	va_end(vl);
	return (k);
}

/**
 * printnumber - Function to print a number.
 * @k: The reference to the characters counter
 * @vl: The number to print
 * @i: The reference to the indexes.
 *
 * Author: José Calderón, deiby ocampo.
 * Return: void
 */
void printnumber(unsigned int *k, va_list vl, unsigned int *i)
{
	*k += _itoa(va_arg(vl, int));
	*i  += 2;
}
