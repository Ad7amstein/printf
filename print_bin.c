#include "main.h"
/**
 * print_bin - print unsigned int argument converted to binary
 *
 * @n: number to be converted and printed
 * Return: int - number of characters printed
 */
int print_bin(va_list n)
{
	unsigned int num, len;
	char *str;

	num = va_arg(n, unsigned int);

	str = convert(num, 2);

	len = print_rev_str(str);

	free(str);
	return (len);
}
