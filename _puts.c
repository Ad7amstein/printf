#include "main.h"
/**
 * _puts - function that prints a string to stdout.
 *
 * @str: string to be printed
 *
 * Return: int - -1 (Failed),
 * 	   number of letters printed
 */
int _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
