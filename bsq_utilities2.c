/*
** EPITECH PROJECT, 2020
** bsq_utilities2.c
** File description:
** second part of utilities
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/bsq.h"

void update_square_data(struct data *sq_d, int size, int i, int j)
{
    if (sq_d->maxsquare < size) {
        sq_d->maxsquare = size;
        sq_d->x_pos = i;
        sq_d->y_pos = j;
    }
}

void we_found_a_dot(char **map, int i, int j, struct data *sq_d)
{
    int size = 1;
    int isadot = 1;

    while (size + i < sq_d->rows && size + j < sq_d->cols && isadot == 1) {
        for (int k = j; k <= size + j; k++) {
            if (map[i + size][k] == 'o') {
                isadot = 0;
                break;
            }
        }
        for (int k = i; k <= size + i; k++) {
            if (map[k][j + size] == 'o') {
                isadot = 0;
                break;
            }
        }
        if (isadot == 1)
            size++;
    }
    update_square_data(sq_d, size, i , j);
}

void search_square(char **map, struct data *sq_d)
{
    for (int i = 0; i < sq_d->rows; i++) {
        for (int j = 0; j < sq_d->cols; j++) {
            if (map[i][j] == '.') {
                we_found_a_dot(map, i, j, sq_d);
            }
        }
    }
}

char *get_pattern(char *buffer)
{
    int a = 0;
    int patternstart = 0;
    char *pattern = malloc(sizeof(char) * my_strlen(buffer));

    for (int i = 0; buffer[i] != '\n'; i++)
        patternstart++;
    for (int i = patternstart + 1; buffer[i] != '\0'; i++) {
        pattern[a] = buffer[i];
        a++;
    }
    pattern[a] = '\0';

    return (pattern);
}

char **load_map(char *buffer, int map_rows, int map_cols)
{
    int x = 0;
    int y = 0;
    char **table = NULL;
    char *pattern = get_pattern(buffer);

    table = malloc(sizeof(char *) * map_rows + 2);
    for (int a = 0; a < map_rows + 1; a++)
        table[a] = malloc(sizeof(char) * map_cols + 1);
    for (int z = 0; pattern[z] != '\0'; z++) {
        if (pattern[z] != '\n') {
            table[x][y] = pattern[z];
            y++;
        }
        else if (pattern[z] == '\n') {
            table[x][y] = '\0';
            x++;
            y = 0;
        }
    }
    return (table);
}