#include "holberton.h"
/**
 * converternum - gets a number integer to convert in binary.
 *
 * @num: data type long integer.
 * @base: the number division and modulate that converter binary.
 * 
 * Return: result to binary.
 */
int converternum(unsigned long int num, unsigned int base)
{
	unsigned long int temp;
	int i;
	unsigned long int count[1000];

	temp = num;
	i = 1;
	while (temp != 0)
	{
		count[i++] = temp % base;
		temp = temp / base;
	}

	return(temp);
}

