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
	    {'r', print_rev_s}, {'b', print_bin},
	    {'R', print_Srot13}, {'%', print_percent_sign},
	    {'n', NULL}};
	va_list args;
	int i, count, j;

	i = 0;
	count = 0;
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			if (format[i] == '\0')
				break;
			while (matches[j].c != 'n' && matches[j].f != NULL)
			{
				if (matches[j].c == format[i])
					count += matches[j].f(args);
				j++;
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	_putchar(BUF_FLUSH);
	return (count);
}
