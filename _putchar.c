#include <unistd.h>

/**
 * _putchar - funtion to print a character
 * Description: A function to print a character
 * given-
 * @c: The character
 * Return: The byte of the specific character.
 */

int _putchar(char c)
{

	return (write(1, &c, 1));
}
