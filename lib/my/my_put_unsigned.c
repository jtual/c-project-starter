/*
** EPITECH PROJECT, 2021
** printf
** File description:
** display unsigned int
*/

#include "my.h"
#include <stdio.h>

void my_put_unsigned(int nb)
{
    long uint_max = 4294967296;
    long b = nb;

    if (nb < 0) {
        uint_max += b;
        my_put_long(uint_max);
    } else
        my_put_nbr(nb);
}
