#include "main.h"

/**
 * print_un - Print a unsigned int
 * @list: Number to print
 * Return: Length of the number
 **/
int print_un(va_list list)
{
	char *pointer_buff;
	int get_size;

	pointer_buff = intstr(va_arg(list, unsigned int), 10);

	get_size = print((pointer_buff != NULL) ? pointer_buff : "NULL");

	return (get_size);
}

