/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** Task05
*/

int my_compute_power_rec(int nb, int p)
{
    long long res = (long long) nb;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    if (p > 0) {
        if ( res < -2147483648 || res > 2147483647)
            return (0);
        res = res * (long long) my_compute_power_rec(res , p - 1);
        return (int)res;
    }
}
