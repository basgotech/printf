#include "main.h"

int _printf(const char *format, ...)
{

int c_print = 0;

va_list lo_args;


if (format == NULL)
return (-1);


va_start(lo_args, format);

while (*format)
{
if (*format != '%')
{
write(1, format, 1);
c_print++;
}
else
{
format++;
if (*format == '\0')
{
break;
}

if (*format == '%')
{

write(1, format, 1);
c_print++;

}
else if (*format == 'c')
{

char char_to_print = va_arg(lo_args, int);
write(1, &char_to_print, 1);
c_print++;

}
else if (*format == 's')
{
char *str = va_arg(lo_args, char*);
int str_len_count = 0;

while (str[str_len_count] != '\0')
str_len_count++;
write(1, str, str_len_count);
c_print += str_len_count;
}

}

format++;

}

va_end(lo_args);

return (c_print);


}
