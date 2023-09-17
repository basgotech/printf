#include "main.h"
/**
 * print_char - print a char.
 * @list: va_list.
 * Return: 1
 */
int print_char(va_list list)
{
	int argl;

	argl = va_arg(list, int);

	_putchar(argl);

	return (1);
}
