#include "holberton.h"
/**
 * binaryconv - receives the numbers to argument
 * that converter in binary.
 *
 * @vl: list arguments.
 *
 * Return: number to binary.
 */
int binaryconv(va_list, argum);
{
	unsigned int num;
	int bin;

	num = va_arg(argum, unsigned int);
	bin = converternum(num, 2);

	return(bin);
}
