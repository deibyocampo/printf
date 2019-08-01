#include "holberton.h"
/**
 *
 *
 *
 *
 */
int binaryconv(va_list, argum);
{
	unsigned int num;
	int bin;

	num = va_arg(argum, unsigned int);
	bin = converternum(num, 2);

	return(bin);
}
