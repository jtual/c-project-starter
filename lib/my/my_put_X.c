/*
** EPITECH PROJECT, 2021
** printf
** File description:
** puts an int in hexa notation
*/

#include "my.h"

void my_put_X(int nbr)
{
    int res = nbr % 16;

    nbr /= 16;
    if (nbr > 0)
        my_put_x(nbr);
    if (res > 9)
        my_putchar(res + 'A' - 10);
    else
        my_put_nbr(res);
}
