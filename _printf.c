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
	/*
	int l;
	*/
	char t;
	char *s;
	/*
	char digits[1];
	*/
	va_start(vl, format);
	while (format[i] != '\0')
	{
		t = format[i];
		if (t == '%' && format[i + 1] == '%')
		{
			i++;
		}
		if (t == '%' && format[i + 1] == 'c')
		{
			t = (char)va_arg(vl, int);
			i++;
		}
		if (t == '%' && format[i + 1] == 's')
		{
			s = "";
			s = va_arg(vl, char*);
			j = 0;
			while (s[j] != '\0')
			{
				_putchar(s[j]);
				k++;
				j++;
			}
			i = i + 2;
			continue;
		}
		/*
		  MUST BE TESTED
		  PENDING THE ITOA VERIFICATION
		if (t == '%' && format[i + 1] == 'd')
		{
			l = 0;
			l = _cdigits(va_arg(vl, int));
			if (va_arg(vl, int) < 0)
			{
				l = l + 1;
			}
			s = "";
			s = _itoa((l + 1), va_arg(vl, int)x);
		        j = 0;
			while (s[j] != '\0')
			{
				_putchar(s[j]);
				k++;
				j++;
			}
			i = i + 2;
			continue;
		}
		*/
		_putchar(t);
		i++;
		k++;
	}
	va_end(vl);
	return (k);
}
