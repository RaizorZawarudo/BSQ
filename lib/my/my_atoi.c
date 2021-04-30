/*
** EPITECH PROJECT, 2020
** my_atoi
** File description:
** .c
*/
#include "../../include/my.h"

int my_atoi(const char *str)
{
    int output = 0;
    int str_len = my_strlen(str);

    for (int i = 0; i < str_len; i++)
        if (str[i] < '0' || str[i] > '9')
            my_putstr("String to int() : Argument is non numeric\n");
    for (int i = 0; i < str_len; i++) {
        output *= 10;
        output += str[i] - 48;
    }
    return output;
}