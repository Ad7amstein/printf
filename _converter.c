#include "main.h"
/**
 * convert - function that conver number base
 *
 * @num: number to convert
 * @base: base to convert to
 * Return: char* - number after convert
 */
char *convert(unsigned int num, int base)
{
	unsigned int i, index;
	char *str;
	char base16[] = {'A', 'B', 'C', 'D', 'E', 'F'};

	if (num == 0)
	{
		str = malloc(sizeof(char) * 2);
		if (str == NULL)
			exit(1);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}

	i = 1;
	index = 0;
	str = malloc(sizeof(char) * i++);
	if (str == NULL)
		exit(1);

	while (num)
	{
		if (num % base < 10)
			str[index++] = (num % base) + '0';
		else
			str[index++] = base16[(num % base) - 10];
		num /= base;
		str = realloc(str, sizeof(char) * (i++));
		if (str == NULL)
		{
			free(str);
			exit(1);
		}
	}

	str[index] = '\0';
	rev_string(str);
	return (str);
}
