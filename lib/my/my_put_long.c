/*
** EPITECH PROJECT, 2021
** printf
** File description:
** display long
*/

void my_putchar(char c);

void my_put_long(long i)
{
    long nb;

    if (i < 0) {
        my_putchar('-');
        i = -i;
    }
    if (i > 9) {
        nb = i % 10;
        i /= 10;
        my_put_long(i);
        my_putchar(nb + 48);
    } else
        my_putchar(i + 48);
}
