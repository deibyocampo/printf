#ifndef _printf_
#define _printf_
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);
void _pts(char *str);
char *_itoa(int n, char *s, int b);
#endif

