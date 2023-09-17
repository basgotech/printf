#include "main.h"

/**
 *_printf - a function that produces output according to a format.
 *@format: A pointer to a format string
 *Return: The no. of char printed. If an error occurs, it returns -1.
*/
int _printf(const char *format, ...)
{
	int get_size;
	va_list argument_list;

	if (format == NULL)
		return (-1);

	get_size = count_len(format);
	if (get_size <= 0)
		return (0);

	va_start(argument_list, format);
	get_size = handle_format(format, argument_list);

	_putchar(-1);
	va_end(argument_list);

	return (get_size);
}
