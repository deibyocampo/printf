#include "holberton.h"

/**
 * _itoa - funtion to convert a number in a string
 * Description: A function to convert a number
 * to string with base 10.
 * @i: The number
 * @s: The string to return
 * Return: The byte of the specific character.
 */
char *_itoa(int i, char s[])
{
	char d[] = "0123456789";
	int sh;
	char *p;

	p = s;
	if (i < 0)
	{
		*p++ = '-';
		i = i * -1;
	}
	sh = i;
	do {
		++p;
		sh = sh / 10;
	} while (sh);
	*p = '\0';
	do {
		*--p = d[i % 10];
		i = i / 10;
	} while (i);
	return (s);
}
