#include "main.h"
/**
 * print_bin - print unsigned int argument converted to binary
 *
 * @n: number to be converted and printed
 * Return: int - number of characters printed
 */
int print_bin(va_list n)
{
	unsigned int num, i, len;
	char *str;

	num = va_arg(n, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	str = malloc(sizeof(char) * 1);
	if (str == NULL)
		exit(1);

	i = 0;
	while (num)
	{
		str[i] = (num % 2) + '0';
		num /= 2;
		i++;
		str = realloc(str, sizeof(char) * (i + 1));
		if (str == NULL)
		{
			free(str);
			exit(1);
		}
	}

	len = i;
	i--;
	while (i)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar(str[i]);

	free(str);
	return (len);
}
