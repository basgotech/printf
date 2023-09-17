#include "main.h"

/**
 * print_base2 - Print a number in base 2
 * @list: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 **/
int print_base2(va_list list)
{
	char *p_buff;
	int size;

	p_buff = intstr(va_arg(list, unsigned int), 2);

	size = print(p_buff);

	return (size);
}

