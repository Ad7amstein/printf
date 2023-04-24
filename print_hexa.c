#include "main.h"
/**
 * print_hex - print unsigned int argument converted to hexadecimal
 *
 * @n: number to be converted and printed
 * Return: int - number of characters printed
 */
int print_hex(va_list n)
{
	unsigned int num, i, len;
	char *str;

	num = va_arg(n, unsigned int);

	str = convert(num, 16);

	i = 0;
	while (str[i])
	{
		if (_isalpha(str[i]))
			str[i] = _to_lower(str[i]);
		_putchar(str[i++]);
		len++;
	}

	free(str);
	return (len);
}

/**
 * print_HEX - print unsigned int argument converted to hexadecimal
 *
 * @n: number to be converted and printed
 * Return: int - number of characters printed
 */
int print_HEX(va_list n)
{
	unsigned int num, i, len;
	char *str;

	num = va_arg(n, unsigned int);

	str = convert(num, 16);

	i = 0;
	while (str[i])
	{
		if (_isalpha(str[i]))
			str[i] = _to_upper(str[i]);
		_putchar(str[i++]);
		len++;
	}

	free(str);
	return (len);
}

/**
 * print_2digits_HEX - print unsigned int argument converted to hexadecimal
 *
 * @num: number to be converted and printed
 * Return: int - number of characters printed
 */
int print_2digits_HEX(int num)
{
	unsigned int i, len;
	char *str;

	str = convert(num, 16);

	i = 0;
	len = 0;
	while (str[i])
	{
		if (_isalpha(str[i]))
			str[i] = _to_upper(str[i]);
		len += _putchar(str[i++]);
	}

	free(str);
	return (len);
}
