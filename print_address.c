#include "main.h"
/**
  * print_address - function to print the address of a pointer
  * Return: number of the chars printed
  * @arg: pointer the argument we are using
  */
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
