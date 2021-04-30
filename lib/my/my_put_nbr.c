/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** my_lib
*/

void my_putchar(char c);

int my_exp(int exp, int i)
{
    while (i > 9) {
        i = i / 10;
        exp = exp * 10;
    }
    return (exp);
}

int do_minus(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    return (nb);
}

int my_put_nbr(int nb)
{
    int j = 0;
    int i = nb;
    int exp = 1;

    if (nb == -2147483648) {
        nb = nb + 1;
        j++;
    }
    nb = do_minus(nb);
    i = nb;
    exp = my_exp(exp, i);
    while (exp > 0) {
        if (exp == 1 && j == 1) {
            my_putchar(nb / exp % 10 + '1');
            exp = exp / 10;
        } else {
            my_putchar(nb / exp % 10 + '0');
            exp = exp / 10;
        }
    }
    return (0);
}

