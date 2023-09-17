#include "main.h"

/**
 * print_string - Print string
 * @list: list.
 *
 * Return: String length.
 */

int print_string(va_list list)
{
	char *p;
	int length;

	p = va_arg(list, char*);
	length = print((p != NULL) ? p : "(null)");

	return (length);
}
