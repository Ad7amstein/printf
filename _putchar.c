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
	return (write(1, &c, 1));
}
