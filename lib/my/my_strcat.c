/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** lib
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int size;
    int i;

    size = my_strlen(dest);
    for (i = 0; src[i] != '\0'; i++)
        dest[size + i] = src [i];
    dest[size + i] = '\0';
    return (dest);
}
