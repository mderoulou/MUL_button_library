/*
** EPITECH PROJECT, 2020
** menu
** File description:
** header for menu
*/

/* -- Include CSFML -- */

#include <SFML/Window.h>
#include <SFML/Graphics.h>

/* -- For coords -- */

#define X ((*cpy)->attrib->pos.x * ((float) win->x))
#define Y ((*cpy)->attrib->pos.y * ((float) win->y))
#define SX ((*cpy)->attrib->size.x)
#define SY ((*cpy)->attrib->size.y)

/* -- All structures of the lib -- */

typedef struct win
{
    int x;
    int y;
    sfRenderWindow *win;
    sfVideoMode mode;
    int menu;
}win_t;

typedef struct att_s
{
    sfVector2f size;
    sfVector2f pos;
}att_t;

typedef struct button
{
    att_t *attrib;
    sfTexture *tex;
    sfTexture *tex_h;
    sfSprite *sprite;
    sfSprite *sprite_h;
    int menu;
    int hover;
    void (*func)(win_t *win);
}button_t;

/* -- Lib funcs -- */

win_t *create_window(int *returned, char *name);
att_t *set_attrib(float x, float y, int width, int depth);
button_t *add_button(int menu, void *func, char *path, att_t *attrib);
void **add_to_array(void **buttons, button_t *new);
void button_main(win_t *win, button_t **buttons);
void button_event(win_t *win, button_t **buttons, sfEvent event);
void free_everything(win_t *win, button_t **buttons);

/* -- Custom Buttons functions -- */

void test(win_t **win);
