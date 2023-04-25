#include "main.h"
/**
 * print_char - function to print char
 *
 * @x: char to be printed
 * Return: int
 */
int print_char(va_list x)
{
	char c;

	c = va_arg(x, int);
	if (c == NULL)
		return (0);
	return (_putchar(c));
}
