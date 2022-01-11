/*
** EPITECH PROJECT, 2021
** printf
** File description:
** main file
*/

#include <stdarg.h>
#include "my.h"

void print_flag(char flag, va_list list)
{
    if (flag == '%')
        my_putchar('%');
    if (flag == 's')
        my_putstr(va_arg(list, char *));
    if (flag == 'd' || flag == 'i')
        my_put_nbr(va_arg(list, int));
    if (flag == 'c')
        my_putchar(va_arg(list, int));
    if (flag == 'u')
        my_put_unsigned(va_arg(list, int));
    if (flag == 'o')
        my_put_oct(va_arg(list, int));
    if (flag == 'x')
        my_put_x(va_arg(list, int));
    if (flag == 'X')
        my_put_X(va_arg(list, int));
    if (flag == 'b')
        my_put_b(va_arg(list, int));
    if (flag == 'S')
        my_put_S(va_arg(list, char *));
}

void my_printf(char *str, ...)
{
    va_list list;
    int i = 0;

    va_start(list, str);
    while (str[i] != '\0') {
        if (str[i] != '%')
            my_putchar(str[i]);
        else {
            print_flag(str[i + 1], list);
            i++;
        }
        i++;
    }
    va_end(list);
    return;
}
