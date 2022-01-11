/*
** EPITECH PROJECT, 2021
** printf
** File description:
** put octal base
*/

#include "my.h"

void my_put_oct(int nbr)
{
    int res = nbr % 8;

    nbr /= 8;
    if (nbr > 0)
        my_put_oct(nbr);
    my_put_nbr(res);
}
