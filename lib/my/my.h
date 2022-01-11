/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

#ifndef MY_H_
    #define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

    void my_putchar(char c);
    int my_isneg(int nb);
    int my_put_nbr(int nb);
    void my_swap(int *a, int *b);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_getnbr(char const *str);
    void my_sort_int_array(int *tab, int size);
    int my_compute_power_rec(int nb, int power);
    int my_compute_square_root(int nb);
    int my_is_prime(int nb);
    int my_find_prilme_sup(int nb);
    char *my_strcpy(char *dest, char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_revstr(char *str);
    char *my_strstr(char *str, char const *to_find);
    int my_strcmp(char const *s1, char const *s2);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    int my_str_isalpha(char const *str);
    int my_str_isnum(char const *str);
    int my_str_islower(char const *str);
    int my_str_isupper(char const *str);
    int my_str_isprintable(char const *str);
    int my_showstr(char const *str);
    int my_showmem(char const *str, int size);
    char *my_strcat(char *dest, char const *src);
    char *my_strncat(char *dest, char const *src, int nb);
    int my_show_word_array(char * const *tab);
    char *my_strdup(char const *str);
    void my_printf(char *str, ...);
    void my_put_long(long i);
    void my_put_unsigned(int nb);
    void my_put_oct(int nbr);
    void my_put_x(int nbr);
    void my_put_X(int nbr);
    void my_put_b(int nbr);
    void my_put_S(char *str);
    int my_get_oct(int nbr, int *result);

#endif/* MY_H_ */
