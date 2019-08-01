#ifndef _printf_
#define _printf_
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _cdigits(int n);
int _itoa(int n);
int _pchar(va_list vl);
int _pstring(va_list vl);
int _pnumber(va_list vl);
/**
 * struct ops - An structure to the _printf options
 * @o: The option to access
 * @f: The function asigned to the specific option.
 *
 * Description: This is an structure to manage
 * the diferent options of the _printf function.
 */
typedef struct ops
{
	char o;
	int (*f)(va_list lv);
} op_list;
#endif
