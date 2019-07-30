#ifndef _printf_
#define _printf_
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _cdigits(int n);
int _itoa(int n);
#endif
