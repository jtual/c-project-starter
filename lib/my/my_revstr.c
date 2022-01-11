/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

#include <stdio.h>

char *my_revstr(char *str)
{
    int len = 0;
    int i = 0;
    char temp;

    for (; str[len] != '\0'; len++);
    len--;
    while (i < len / 2) {
        temp = str[i];
        str[i] = str[len - i];
        str[len - i] = temp;
        i++;
    }
    return str;
}
