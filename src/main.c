/*
** EPITECH PROJECT, 2020
** main
** File description:
** main file
*/

#include "menu.h"
#include "my.h"

/*
SON
FRAMERATE
SCREENSIZE
*/

void main_loop(win_t *win, int *returned, void **buttons)
{
    sfEvent event;
    sfHttpRequest* http = sfHttpRequest_create();

    while (sfRenderWindow_isOpen(win->win)) {
        if (*returned == 84)
            return;
        sfRenderWindow_clear(win->win, sfBlue);
        while (sfRenderWindow_pollEvent(win->win, &event)) {
            manage_event(win, buttons, event);
        }
        button_main(win, (button_t **)buttons);
        sfRenderWindow_display(win->win);
    }
}

void test(win_t **win)
{
    printf("Hello it's me !\n");
}

int main(int ac, char **av)
{
    int returned = 0;
    win_t *my_win = create_window(&returned, "My Game");
    void **buttons;
    void *res;
    char *path = strdup("assets/play");

    if (!my_win)
        return (returned);
    res = add_button(0, &test, path, set_attrib(0.45,0.5,200,80));
    buttons = add_to_array(buttons, res);
    path = strdup("assets/play");
    res = add_button(0, &test, path, set_attrib(0.8,0.3,200,80));
    buttons = add_to_array(buttons, res);
    main_loop(my_win, &returned, buttons);
    free_everything(my_win, (button_t **)buttons);
    return (returned);
}
