#include <unistd.h>
/**
 * _putchar - function to print a character
 * Descrition: A function to print a character
 * given-
 * @c: The character
 * Return: The byte of the specific character
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
