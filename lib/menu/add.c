/*
** EPITECH PROJECT, 2020
** menu
** File description:
** add / remove button;
*/

#include <stdlib.h>
#include "menu.h"

void **add_to_array(void **buttons, button_t *new)
{
    int nb = 0;
    void **new_buttons;

    if (!buttons) {
        new_buttons = malloc(2 * sizeof(void *));
        new_buttons[1] = 0;
        new_buttons[0] = new;
    }else {
        for (button_t **cpy = (button_t **)buttons; *cpy; cpy++, nb++);
        new_buttons = malloc(sizeof(button_t *) * (nb + 2));
        new_buttons[nb + 1] = 0;
        nb = 0;
        for (button_t **cpy = (button_t **)buttons; *cpy; cpy++, nb++)
            new_buttons[nb] = buttons[nb];
        new_buttons[nb] = new;
        free(buttons);
    }
    return (new_buttons);
}

char *add_after(char *str, char *after)
{
    char *new_str;
    int x;

    for (x = 0; str[x]; x++);
    new_str = malloc((x + 3) * sizeof(char));
    new_str[x+2] = 0;
    for (x = 0; str[x]; x++)
        new_str[x] = str[x];
    new_str[x] = after[0];
    new_str[x+1] = after[1];
    return (new_str);
}

button_t *add_button(int menu, void *func, char *path, att_t *attrib)
{
    button_t *button =  malloc(sizeof(button_t));
    sfTexture *text = sfTexture_createFromFile(path, NULL);
    char *new_path = add_after(path, "_h");
    sfTexture *text_h = sfTexture_createFromFile(new_path, NULL);

    free(new_path), free(path);
    button->tex = text;
    button->tex_h = text_h;
    button->sprite = sfSprite_create();
    button->sprite_h = sfSprite_create();
    sfSprite_setTexture(button->sprite, button->tex, sfTrue);
    sfSprite_setTexture(button->sprite_h, button->tex_h, sfTrue);
    button->menu = menu;
    button->attrib = attrib;
    button->hover = 0;
    button->func = func;
    return (button);
}
