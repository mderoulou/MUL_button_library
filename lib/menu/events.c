/*
** EPITECH PROJECT, 2020
** events
** File description:
** Buttons events
*/

#include "menu.h"

void button_click(win_t *win, button_t **buttons)
{
    button_t **cpy = buttons;
    sfVector2i pos = sfMouse_getPosition((sfWindow *)win->win);

    while (*cpy) {
        if (pos.x >= X && pos.x <= X + SX && pos.y >= Y && pos.y <= Y + SY)
            ((*cpy)->func)(win);
        cpy++;
    }
}

void button_on_click(win_t *win, button_t **buttons)
{

}

void button_event(win_t *win, button_t **buttons, sfEvent event)
{
    if (event.type == sfEvtMouseButtonReleased) {
        button_click(win, buttons);
    }
    if (event.type == sfEvtMouseButtonPressed) {
        button_on_click(win, buttons);
    }
}
