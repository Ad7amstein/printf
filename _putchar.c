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
