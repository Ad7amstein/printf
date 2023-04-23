#include "main.h"

int get_print_fun(char c, va_list args)
{
	convert_specifier matches[] = {
	    {'c', print_char},
	    {'s', print_string},
	    {'b', print_bin},
	    {'%', print_percent_sign},
	    {'r', print_rev_s},
	    {'R', print_Srot13},
	    /*{'d', print_int},*/
	    /*{'i', print_int},*/
	    /*{'o', print_oct},*/
	    /*{'o', print_ui},*/
	    /*{'x', print_hex},*/
	    /*{'X', print_HEX},*/
	    /*{'p', print_address},*/
	    {'\0', NULL}};
	int i;

	i = 0;
	while (matches[i].c && matches[i].f)
	{
		if (matches[i].c == c)
			return (matches[i].f(args));
		i++;
	}

	return (0);
}
