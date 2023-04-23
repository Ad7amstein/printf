#include "main.h"
/**
 * _printf - function that produces output according to a format.
 *
 * @format:  character string.
 * The format string is composed of zero or more directives.
 * @...: argument list
 *
 * Return: int - number of printed letters
 */
int _printf(const char *format, ...)
{
	convert_specifier matches[] = {
	    {'c', print_char}, {'s', print_string},
	    {'%', print_percent_sign}, {'b', print_bin},
	    {'r', print_rev_s}, {'R', print_Srot13}, {'n', NULL}};
	va_list args;
	int i, count, j;

	i = 0;
	count = -1;
	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			j = 0;
			while (matches[j].c != 'n' && matches[j].f != NULL)
			{
				if (matches[j].c == format[i])
					count += matches[j].f(args);
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count + 1);
}
