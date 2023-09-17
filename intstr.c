#include "main.h"

/**
 * intstr - integer to ASCHII
 * @number: number
 * @base: base
 * Return: character
 **/
char *intstr(long int number, int base)
{
	static char *arr = "0123456789abcdef";
	static char buf[50];
	char sign = 0;
	char *pointer;
	unsigned long n = number;

	if (number < 0)
	{
		n = -number;
		sign = '-';
	}
	pointer = &buf[49];
	*pointer = '\0';

	do      {
		*--pointer = arr[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--pointer = sign;
	return (pointer);
}
