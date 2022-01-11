/*
** EPITECH PROJECT, 2021
** printf
** File description:
** put octal base
*/

#include "my.h"

int my_get_oct(int nbr, int *result)
{
    int res = nbr % 8;

    nbr /= 8;
    if (nbr > 0)
        my_get_oct(nbr, result);
    *result *= 10;
    *result += res;
}
