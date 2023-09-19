#include "main.h"

/**
 * get_size - process the size to cast the argument
 * @format: Formatted string
 * @i: List of arguments to be printed.
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int current_index = *i + 1;
	int get_size = 0;

	if (format[current_index] == 'l')
		get_size = SIZE_LONG;
	else if (format[current_index] == 'h')
		get_size = SIZE_SHORT;

	if (get_size == 0)
		*i = current_index - 1;
	else
		*i = current_index;

	return (get_size);
}
