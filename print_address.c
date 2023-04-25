#include "main.h"

int print_address(va_list arg)
{
	unsigned long int i = 0, temp;
	char *str;

	temp = va_arg(arg, unsigned long int);
	str = address_converter(temp, 16);
	if (!temp)
		str = "(nil)";
	else
	{
		*--str = 'x';
		*--str = '0';
	}
	while (str[i])
		_putchar(str[i++]);

	return (i++);

}
