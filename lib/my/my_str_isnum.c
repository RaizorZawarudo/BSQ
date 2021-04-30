/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** TAsk13
*/

int my_str_isnum(char *str)
{
    int i = 0;

    if (str[i] == '\0')
        return (1);
    while (str[i] != '\0') {
        if (str[i] == '-' && i == 0)
            i += 1;
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}
