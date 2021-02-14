/*
** EPITECH PROJECT, 2020
** win
** File description:
** all win func
*/

#include <stdlib.h>
#include "menu.h"

int init_my_win(win_t *my_win, char *name)
{
    my_win->x = 1920;
    my_win->y = 1080;
    my_win->mode.width = my_win->x;
    my_win->mode.height = my_win->y;
    my_win->mode.bitsPerPixel = 32;
    my_win->win = sfRenderWindow_create(my_win->mode, name, sfClose, NULL);
    if (!my_win->win)
        return (1);
    my_win->menu = 0;
    return (0);
}

win_t *create_window(int *returned, char *name)
{
    win_t *my_win = malloc(sizeof(win_t));
    int res;
    if (!my_win) {
        *returned = 84;
        return (NULL);
    } else
        res = init_my_win(my_win, name);
    if (res) {
        *returned = 84;
        return (NULL);
    }
    return (my_win);
}

att_t *set_attrib(float x, float y, int width, int depth)
{
    att_t *attrib = malloc(sizeof(att_t));
    sfVector2f pos = {x, y};
    sfVector2f size = {(float) width, (float) depth};

    attrib->size = size;
    attrib->pos = pos;
    return (attrib);
}
