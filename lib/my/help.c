/*
** EPITECH PROJECT, 2019
** help
** File description:
** Print help of My Runner
*/

int my_putstr(char const *str);
void my_putchar(char c);

void print_help(void)
{
    my_putstr("/------------------\\\n");
    my_putstr("|------RUNNER------|\n");
    my_putstr("|------ALIENS------|\n");
    my_putstr("\\------------------/\n");
    my_putstr("\t<-- USAGE -->\n\n");
    my_putstr("./my_runner ${PATH}    | run a normal map\n./my_runner -h     ");
    my_putstr("    | display usage and quit\n");
    my_putstr("./my_runner -i ${PATH} | run in infinite ");
    my_putstr("mode\n\n\t<-- STORY -->\nAliens arrive on Earth,");
    my_putstr(" help them to run all around the world !!\n\n\t<-- KEYS -->\n");
    my_putstr("SPACE - Jump stay pressed for higher jumps & slow falls\n");
    my_putstr("\n\t<-- CREATE A MAP -->\nCreate your file with 3 lines,");
    my_putstr("write '0' for space and '1' for ufos.\n");
}
