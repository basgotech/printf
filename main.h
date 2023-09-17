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

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* printers */
int print_string(va_list);
int print_char(va_list);


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

