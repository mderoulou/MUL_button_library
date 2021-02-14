/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** No instruction except 'my_strcmp'
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int siz1 = my_strlen(s1);
    int siz2 = my_strlen(s2);

    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return (0);
}
