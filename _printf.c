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
	int i, count;
	char *s;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				_putchar((char)va_arg(args, int));
				count++;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "";
				count += _puts(s);
				break;
			case '%':
				_putchar('%');
				count++;
			default:
				break;
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
