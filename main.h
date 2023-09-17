#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* count length */
int count_len(const char *);

/* print char */
int print(char *);

/* printf.c */
int _printf(const char *, ...);

/* print intstr */
char *intstr(long int, int);

/* handle_format.c */
int handle_format(const char *, va_list);
int percent_handler_format(const char *, va_list, int *);

char *convert(unsigned long int num, int base, int lowercase);

/* printers */
int print_string(va_list);
int print_char(va_list);
int print_int(va_list);
int print_base2(va_list);
int print_un(va_list);
int print_base8(va_list);
int print_x_lower_hex(va_list);
int print_X_upper_hex(va_list);
int print_S(va_list list);

/* _putchar.c */
int _putchar(char);
int buf_c(char);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif
