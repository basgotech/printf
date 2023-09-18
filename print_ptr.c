#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compare two strings
 * @str1: String 1
 * @str2: String 2
 * Return: diff integer or 0
 **/
int _strcmp(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}

	return (0);
}

/**
 * print_ptr - Print a number in hexadecimal format
 * @list: Number to print
 * Return: length
 **/
int print_ptr(va_list list)
{
	char *pointer_buff;
	int get_size;

	pointer_buff = intstr(va_arg(list, unsigned long int), 16);

	if (!_strcmp(pointer_buff, "0"))
		return (print("(nil)"));

	get_size = print("0x");

	if (!_strcmp(pointer_buff, "-1"))
		get_size += print("ffffffffffffffff");
	else
		get_size += print(pointer_buff);

	return (get_size);
}
