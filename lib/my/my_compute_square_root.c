/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** task05
*/

int my_compute_square_root(int nb)
{
    if ( nb <= 0)
        return (0);
    for (int i = 1; i <= nb; i++) {
        if ( i * i == nb )
            return (i);
        if (i * i > nb)
            return (0);
    }
}
