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
 * rev_string - function that reverses a string.
 *
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char c;

	i = 0;
	while (s[i])
	{
		i++;
	}
	for (j = 0; j < (i / 2); j++)
	{
		c = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = c;
	}
}
