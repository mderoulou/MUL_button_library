/*
** EPITECH PROJECT, 2019
** my_nts
** File description:
** Transform a number to str
*/

#include <stdlib.h>

int nb_len(int nb)
{
    int len = 0;

    while (nb > 0) {
        nb /= 10;
        len++;
    }
    return (len);
}

char *my_nts(int nb)
{
    char *str;
    int len = nb_len(nb);
    int pos = len - 1;

    str = malloc(len * sizeof(char));
    str[len] = 0;
    while (nb > 0) {
        str[pos] = (nb % 10) + '0';
        nb /= 10;
        pos--;
    }
    return (str);
}
