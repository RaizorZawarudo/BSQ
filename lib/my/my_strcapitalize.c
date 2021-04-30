/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** task10
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            if (str[i - 1] == '-' || str[i - 1] == '+'
                || str[i - 1] == ' ' || i == 0)
                str[i] = str[i] - 32;
        i++;
    }
    return (str);
}

