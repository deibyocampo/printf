#include "holberton.h"

/**
 * _itoa - funtion to convert a number in a string
 * Description: A function to convert a number
 * to string with base 10.
 * @n: The number to print
 * Return: the characters print
 */
int _itoa(int n)
{
	int sh, l = 0, i = 0, j = 0, c = 0, tl;
	char *s;

	l = (n < 0) ? (_cdigits(n) + 1) : _cdigits(n);
	tl = l + 1;
	s = (char *)malloc(sizeof(char) * tl);
	if (s == NULL)
		return (0);
	sh = n;
	if (n < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sh < 0)
		s[i++] = '-';
	s[i] = '\0';
	i = 0;
	j = l;
	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
	for (i = 0; i < (l + 1); i++)
		_putchar(s[i]);
	free(s);
	return (i - 1);
}
