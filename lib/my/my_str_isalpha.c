/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** Task12
*/

int my_str_isalpha(char const *str)
{
    if (str[0] == '\0')
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 'A' || str[i] > 'Z')
            && (str[i] < 'a' || str[i] > 'z'))
            return (0);
    }
    return (1);
}
