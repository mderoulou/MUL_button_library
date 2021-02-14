/*
** EPITECH PROJECT, 2019
** my
** File description:
** Announce all functions of libmy.a
*/

#ifndef _my_h_
#define _my_h_
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
int my_strcmp(char const *s1, char const *s2);
void my_putchar(char c);
int my_strlen(char const *str);
int my_putstr(char const *str);
void print_help(void);
char *my_nts(int nb);
char *my_strcat(char *dest, char const *src);
void init_win(char **map, int len, int inf);
void replace_mouse(sfRenderWindow *window);
void change_icon(sfRenderWindow *window);
char *my_path_c(const char *str);
void manage_event(win_t *win, void **buttons, sfEvent event);

#endif
