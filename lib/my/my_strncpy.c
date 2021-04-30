/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** Task02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    while (src[a] != '\0' && a < n) {
        dest[a] = src[a];
        a++;
    }
    while (a < n) {
        dest[a] = '\0';
        a++;
    }
    return (dest);
}