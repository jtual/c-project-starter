/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

int my_strncmp(char const *s1 , char const *s2, int n)
{
    int i = 0;
    while (i < n) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}
