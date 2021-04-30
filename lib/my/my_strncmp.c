/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** Task07
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] != '\0' && i < n) {
        if ((s1[i] - s2[i]) == 0)
            i++;
        else
            return (s1[i] - s2[i]);
    }
    return (s1[i] - s2[i]);
}
