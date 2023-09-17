#include "main.h"

/**
 * is_low - Check if the character are in lowercase
 * @c: Character
 * Return: 1 or 0
 **/
int is_low(char c)
{
	return (c >= 'a' && c <= 'z');
}



/**
 * str_upper - Change the string to uppercase
 * @s: String
 * Return: String uppercase
 **/
char *str_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_low(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}

/**
 * print_X_upper_hex - Print a number in hexadecimal format
 * @list: Number to print
 * Return: Length of the number
 **/
int print_X_upper_hex(va_list list)
{
	char *pointe_buffer;
	int get_size;

	pointe_buffer = intstr(va_arg(list, unsigned int), 16);
	pointe_buffer = str_upper(pointe_buffer);

	get_size = print((pointe_buffer != NULL) ? pointe_buffer : "NULL");

	return (get_size);
}
