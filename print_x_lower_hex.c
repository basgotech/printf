#include "main.h"

/**
 * print_x_lower_hex - Print a number in hexadecimal format
 * @list: Number to print
 * Return: Length of the number
 **/
int print_x_lower_hex(va_list list)
{
	char *pointer_buffer;
	int get_size;

	pointer_buffer = intstr(va_arg(list, unsigned int), 16);

	get_size = print((pointer_buffer != NULL) ? pointer_buffer : "NULL");

	return (get_size);
}
