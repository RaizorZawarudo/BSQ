/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** lib
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i;
    int size;

    size = my_strlen(dest);
    for (i = 0; src[i] != '\0' && i < nb; i++)
        dest[size] = src[i];
    dest[i + size] = '\0';
    return (dest);
}
