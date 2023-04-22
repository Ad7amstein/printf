#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
typedef struct format 
{
	char c;
	int (*f)();
} convert_specifier;
int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int print_char(va_list x);
int print_string(va_list x);
int print_percent_sign(void);

#endif /* MAIN_H */
