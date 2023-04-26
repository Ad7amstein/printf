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
	va_list args;
	unsigned int i, count, ok;

	i = 0;
	count = 0;
	va_start(args, format);
	if (format == NULL || format == 0 || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ok = get_print_fun(format[i + 1], args);
			if (ok)
			{
				count += ok;
				i++;
			}
			else
			count += _putchar(format[i]);
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	_putchar(BUF_FLUSH);
	va_end(args);
	return (count);
}
