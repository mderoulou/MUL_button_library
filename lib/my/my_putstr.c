/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** Script which display one by one char in an array.
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    for (int x = 0; str[x] != '\0' ; x++){
        my_putchar(str[x]);
    }
    return (0);
}
