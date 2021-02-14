/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** Put a str in a str
*/

#include <stdlib.h>

int get_len_dest(char *dest)
{
    int x;

    for (x = 0; dest[x]; x++);
    return (x);
}

char *my_strcat(char *dest, char *src)
{
    int i;
    int dest_len = get_len_dest(dest);
    int src_len = get_len_dest(src);
    char *str;

    str = malloc(sizeof(char) * (dest_len + src_len + 1));
    str[dest_len + src_len] = '\0';
    for (int x = 0; dest[x]; x++)
        str[x] = dest[x];
    for (i = 0; src[i] != '\0'; i++) {
        str[dest_len + i] = src[i];
    }
    return (str);
}
