#include "main.h"
/**
 * print_ui - print unsigned int argument
 *
 * @n: number to be converted and printed
 * Return: int - number of characters printed
 */
int print_ui(va_list n)
{
	unsigned int num, len;
	char *str;

	num = va_arg(n, unsigned int);

	str = convert(num, 10);

	len = print_rev_str(str);

	free(str);
	return (len);
}
