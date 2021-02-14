/*
** EPITECH PROJECT, 2019
** my_path
** File description:
** Function path of My Runner
*/

#include <stdlib.h>

char *my_strdup(char *str, int size)
{
    int len;
    char *new_str;

    for (len = 0; str[len]; len++);
    new_str = malloc((len + size + 1) * sizeof(char));
    if (!new_str)
        return (0);
    for (int x = 0; x < len; x++)
        new_str[x] = str[x];
    new_str[len + size] = 0;
    return (new_str);
}

char *my_path_c(const char *str)
{
    char *new_str = my_strdup("./img/char/", 5);
    int len;

    for (len = 0; str[len]; len++);
    for (int x = 11; x < (11 + 5); x++)
        new_str[x] = str[x - 11];
    return (new_str);
}
