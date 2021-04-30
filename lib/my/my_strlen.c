/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** Task03
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str && str[i] != '\0') {
        i++;
    }
    return (i);
}
