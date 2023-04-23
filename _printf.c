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
	    {'c', print_char},
	    {'s', print_string},
	    {'%', print_percent_sign},
	    {'b', print_bin},
	    {'n', NULL}};
	va_list args;
	int i, count, j, ok;

	i = 0;
	count = 0;
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			j = 0;
			ok = 0;
			while (matches[j].c != 'n' && matches[j].f != NULL)
			{
				if (matches[j].c == format[i])
				{
					ok = 1;
					count += matches[j].f(args);
				}
				j++;
			}
			if (!ok)
			{
				_putchar('%');
				i--;
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
	return (count);
}
