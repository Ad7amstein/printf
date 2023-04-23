#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct format - match and convert the specifiers for printf
 *
 * @c: specifier
 * @f: function to be executed
 */
typedef struct format
{
	char c;
	int (*f)();
} convert_specifier;
int _putchar(char c);
int _puts(char *str);
int print_char(va_list x);
int print_string(va_list x);
int print_percent_sign(void);
int print_bin(va_list n);
int print_rev_s(va_list arg);
int print_Srot13(va_list str);
int _printf(const char *format, ...);

#endif /* MAIN_H */
