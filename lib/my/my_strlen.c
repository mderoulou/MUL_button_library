/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** Script which return the len of a str
*/

int my_strlen(char const *str)
{
    int counter = 0;

    for (int x = 0; str[x] != '\0'; x++){
        counter++;
    }
    return (counter);
}
