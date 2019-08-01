#include "holberton.h"

/**
 * _ntons - funtion to convert to bynary, octal or hex
 * Description: A function to convert the base 10 number
 * to other numberation system.
 * @n: The number
 *
 * Return: The characters printed.
 */
int _ntons(int n, int b)
{
	int t = 0, r = 0, sh = 0, i = 0;
	char *s, c = '0';
	

	if (!(b >= 2) && !(b <= 16))
		return (0);
	sh = n;
	do {
		r = n % b;
		n = n / b;
		++t;
	} while (n > 0);
	s = (char *)malloc((sizeof(char) * t) + 1);
	if (s == NULL)
		return (0);
	r = 0;
	n = sh;
	t = 0;
	do {
		r = n % b;
		if (b == 16 && r > 9 && r < 16)
			c = 'W';
		s[t] = r + c;
		n = n / b;
		t++;
	} while (n > 0);
	s[t] = '\0';
	for (i = t; i >= 0; i--)
		_putchar(s[i]);
	free(s);
	return (t);
}
