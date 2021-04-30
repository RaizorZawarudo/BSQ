/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** Task05
*/

int my_minus(int i, char const *str)
{
    int j = 1;
    int nb_m = 0;

    while (str[i - j] == '-' || str[i - j] == '+') {
        if (str[i - j] == '-')
            nb_m++;
        j++;
    }
    if (nb_m % 2 != 0)
        return (1);
    else
        return (0);
}

int add_zero(char digit, long long nb, int nb_min)
{
    long long res = (nb * 10 + (digit - '0'));

    if (res > 2147483647 && nb_min == 0 || res > 2147483648 && nb_min == 1) {
        return (-1);
    } else {
        return (int)res;
    }
}

int my_getnbr(char const *str)
{
    int i = 0;
    int my_nb = 0;
    int nb_min = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            if (str[i - 1] == '-' && i != 0) {
                nb_min =  my_minus(i, str);
            }
            my_nb = add_zero(str[i], (long long)my_nb, nb_min);
            if (my_nb == -1)
                return (0);
            if (str[i + 1] < '0' || str[i + 1] > '9')
                break;
        }
        i++;
    }
    if (nb_min == 1)
        my_nb = my_nb * -1;
    return (my_nb);
}
