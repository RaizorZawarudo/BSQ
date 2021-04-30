/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** Task07
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (nb <= 2)
        return (2);
    while (!my_is_prime(nb))
        nb++;
    return (nb);
}
