/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** bsq main
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/bsq.h"

char **mark_biggest_square(char **map, struct data *sq_d)
{
    char **table = NULL;
    table = malloc(sizeof(char *) * sq_d->rows + 2);
    for (int a = 0; a < sq_d->rows + 1; a++)
        table[a] = malloc(sizeof(char) * sq_d->cols + 1);
    for (int i = 0; i < sq_d->rows; i++) {
        for (int j = 0; j< sq_d->cols; j++)
            table[i][j] = map[i][j];
    }
    for (int x = sq_d->x_pos; x < sq_d->x_pos + sq_d->maxsquare; x++) {
        for (int y = sq_d->y_pos; y < sq_d->y_pos + sq_d->maxsquare; y++) {
            table[x][y] = 'x';
        }
    }
    return (table);
}

int main(int argc, char **argv)
{
    struct data *sq_d = malloc(sizeof( *sq_d));
    sq_d->maxsquare = 0;
    char *buffer = load_file_in_mem(argv[1]);
    char **map = NULL;
    char **output = NULL;
    if (argc < 2)
        return (84);
    sq_d->rows = fs_get_number_from_first_line(argv[1]);
    if (error_handling(argc, sq_d->rows, buffer))
        return (84);
    sq_d->cols = get_second_line_size(argv[1]);
    map = load_map(buffer, sq_d->rows, sq_d->cols);
    search_square(map, sq_d);
    output = mark_biggest_square(map, sq_d);
    for (int i = 0; i < sq_d->rows; i++) {
        for (int j = 0; j< sq_d->cols; j++)
            my_putchar(output[i][j]);
        my_putchar('\n');
    }
    return (0);
}