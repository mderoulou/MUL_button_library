/*
** EPITECH PROJECT, 2020
** buttons
** File description:
** All buttons func of menu lib
*/

#include "menu.h"

void draw_buttons(win_t *win, button_t **buttons)
{
    button_t **cpy = buttons;
    sfVector2f pos;
    sfSprite *one;
    sfSprite *two;

    while (*cpy) {
        if ((*cpy)->menu == win->menu) {
            one = (*cpy)->sprite;
            two = (*cpy)->sprite_h;
            pos.x = ((float) win->x) * (*cpy)->attrib->pos.x;
            pos.y = ((float) win->y) * (*cpy)->attrib->pos.y;
            sfSprite_setPosition((*cpy)->hover ? two : one, pos);
            sfRenderWindow_drawSprite(win->win, (*cpy)->hover ? two : one, 0);
        }
        cpy++;
    }
}

void hover_changes(win_t *win, button_t **buttons)
{
    button_t **cpy = buttons;
    sfVector2i pos = sfMouse_getPosition((sfWindow *)win->win);

    while (*cpy) {
        if (pos.x >= X && pos.x <= X + SX && pos.y >= Y && pos.y <= Y + SY)
            (*cpy)->hover = 1;
        else
            (*cpy)->hover = 0;
        cpy++;
    }
}

void button_main(win_t *win, button_t **buttons)
{
    hover_changes(win, buttons);
    draw_buttons(win, buttons);
}
