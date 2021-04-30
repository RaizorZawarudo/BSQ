/*
** EPITECH PROJECT, 2020
** my_is_printable
** File description:
** TAsk16
*/

int my_str_isprintable(char const *str)
{
    if (str[0] == '\0')
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < ' ' || str[i] > '~')
            return (0);
    }
    return (1);
}
