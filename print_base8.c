#include "main.h"

/**
 * print_base8 - Print a unsigned octal
 * or base 8
 * @list: number to print
 *
 * Return: return base 8 or length
 **/
int print_base8(va_list list)
{
	char *pointer_buff;
	int get_size;

	pointer_buff = intstr(va_arg(list, unsigned int), 8);

	get_size = print((pointer_buff != NULL) ? pointer_buff : "NULL");

	return (get_size);
}
