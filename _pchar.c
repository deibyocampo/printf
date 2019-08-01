#include "holberton.h"

/**
 * _pchar - Function to print a char.
 * @vl: The va_list
 *
 * Author: José Calderón
 * Return: The numbers printed
 */
int _pchar(va_list vl)
{
	return (_putchar((char)va_arg(vl, int)));
}
