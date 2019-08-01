#include "holberton.h"

/**
 * _pnumber - Function to print a number.
 * @vl: The va_list
 *
 * Author: José Calderón
 * Return: The numbers printed
 */
int _pnumber(va_list vl)
{
	return (_itoa(va_arg(vl, int)));
}
