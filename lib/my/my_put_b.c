/*
** EPITECH PROJECT, 2021
** printf
** File description:
** puts an int in binary base
*/

#include "my.h"

void my_put_b(int nbr)
{
    int i = 0;
    int res[30];

    while (nbr > 0) {
        res[i] = nbr % 2;
        nbr /= 2;
        i++;
    }
    if (nbr % 2 == 0)
        i--;
    while (i >= 0) {
        my_put_nbr(res[i]);
        i--;
    }
}