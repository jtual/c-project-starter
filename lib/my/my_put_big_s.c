/*
** EPITECH PROJECT, 2021
** printf
** File description:
** putstr non printable char are ascii value
*/

#include "my.h"

void display_zero(char c)
{
    int result = 0;
    int oct = my_get_oct(c, &result);

    if (oct < 10)
        my_putstr("00");
    else if (oct < 100)
        my_putchar('0');
}

void my_put_big_s(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] == 127) {
            my_putchar('\\');
            display_zero(str[i]);
            my_put_oct(str[i]);
        } else
            my_putchar(str[i]);
        i++;
    }
}
