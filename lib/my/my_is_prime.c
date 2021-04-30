/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** Task06
*/

int my_is_prime(int nb)
{
    int n = 0;

    for (int i = 1; i <= nb; i++) {
        if (nb % i == 0)
            n++;
        if (n > 2)
            return (0);
    }
    return (1);
}
