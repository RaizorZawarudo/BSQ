/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** Task05
*/

char	*my_strstr(char *str, char *to_find)
{
    int	i;
    int	j;
    char *str1;

    i = 0;
    while (str[i] != '\0')
    {
        i = i + 1;
        j = 0;
        if (str[i] == str[j] || str[i] != '\0') {
            i = i + 1;
            str1 = &str[i];
        if (str[i] == str[j] && str[j] != '\0') {
            j = j + 1;
            return (str1);
        }
        else
            i = i + 1;
        }
    }
}
