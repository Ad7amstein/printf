#include "main.h"
/**
 * print_oct - print unsigned int argument converted to octal
 *
 * @n: number to be converted and printed
 * Return: int - number of characters printed
 */
int print_oct(va_list n)
{
	unsigned int num, len;
	char *str;

	num = va_arg(n, unsigned int);

	str = convert(num, 8);

	len = print_rev_str(str);

	free(str);
	return (len);
}
