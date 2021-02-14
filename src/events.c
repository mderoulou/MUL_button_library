/*
** EPITECH PROJECT, 2020
** events
** File description:
** Manage event
*/

#include "menu.h"

void manage_event(win_t *win, void **buttons, sfEvent event)
{
    button_event(win, (button_t **)buttons, event);
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(win->win);
}
