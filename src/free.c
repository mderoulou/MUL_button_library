/*
** EPITECH PROJECT, 2020
** free
** File description:
** Free, t'as tout compris :)
*/

#include <stdlib.h>
#include "menu.h"
#include "my.h"

void free_everything(win_t *win, button_t **buttons)
{
    button_t **cpy = buttons;
    sfRenderWindow_destroy(win->win);
    free(win);
    while (*cpy) {
        free((*cpy)->attrib);
        sfTexture_destroy((*cpy)->tex);
        sfTexture_destroy((*cpy)->tex_h);
        sfSprite_destroy((*cpy)->sprite);
        sfSprite_destroy((*cpy)->sprite_h);
        free((*cpy));
        cpy++;
    }
    free(buttons);
}
