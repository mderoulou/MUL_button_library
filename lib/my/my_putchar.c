/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** The putchar
*/

void write(int fildes, const void *buf, int nbyte);

void my_putchar(char c)
{
    write(1, &c, 1);
}
