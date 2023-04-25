#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _printf("%b\n", 98);
	printf("len: %d\n", len);
	len = _printf("%o\n", 98);
	printf("len: %d\n", len);
	len = _printf("%x\n", 98);
	printf("len: %d\n", len);
	len = _printf("%X\n", 98);
	printf("len: %d\n", len);
	printf("-----------------------------\n");
	printf("%o\n", 98);
	printf("%x\n", 98);
	printf("%X\n", 98);
	return (0);
}