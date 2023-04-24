#include "main.h"
/**
 * _putchar - fuction to print one letter
 *
 * @c: letter to be printed
 *
 * Return: int - 1 (Success),
 * -1 (Failed)
 */
int _putchar(char c)
{
	static int i;
	static char buffer[OUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUT_BUF_SIZE)
	{
		write(1, buffer, i);
		i = 0;
	}

	if (c != BUF_FLUSH)
		buffer[i++] = c;

	return (1);
}

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: string to return it's length
 * Return: The length of the string (int)
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * print_rev_str - print string in reverse order
 *
 * @s: string to be printed
 * Return: int - number of character printed
 */
int print_rev_str(char *s)
{
	int i, len;

	i = 0;
	if (s == NULL)
		s = "(null)";

	while (s[i])
		i++;

	len = i;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	return (len);
}
