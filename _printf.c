#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed_out = 0, printed_chars = 0;
	int flags_get, width_get, precision_get, size_get, buff_ind_get = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind_get++] = format[i];
			if (buff_ind_get == BUFF_SIZE)
				print_buffer(buffer, &buff_ind_get);
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind_get);
			flags_get = get_flags(format, &i);
			width_get = get_width(format, &i, list);
			precision_get = get_precision(format, &i, list);
			size_get = get_size(format, &i);
			++i;
			printed_out = print_operate(format, &i, list, buffer,
				flags_get, width_get, precision_get, size_get);
			if (printed_out == -1)
				return (-1);
			printed_chars += printed_out;
		}
	}

	print_buffer(buffer, &buff_ind_get);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
