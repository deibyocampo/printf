#include "holberton.h"
/**
 * binary_print - receives the numbers to argument
 * that converter in binary.
 *
 * @vl: list arguments.
 *
 * Return: number to binary.
 */
int binary_print(va_list, vl);
{
	unsigned int num;
	int bin;

	num = va_arg(vl, unsigned int);
	bin = converternum(num, 2);

	return(bin);
}
