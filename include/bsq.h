/*
** EPITECH PROJECT, 2020
** bsq.h
** File description:
** functions for bsq
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

struct data
{
    int maxsquare;
    int x_pos;
    int y_pos;
    int rows;
    int cols;
};

char *load_file_in_mem(char const *filepath);
int fs_get_number_from_first_line(char const *filepath);
int get_second_line_size(char const *filepath);
int error_handling(int argc, int map_rows, char *buffer);
char **load_map(char *buffer, int map_rows, int map_cols);
void search_square(char **map, struct data *sq_d);
void we_found_a_dot(char **map, int i, int j, struct data *sq_d);
void update_square_data(struct data *sq_d, int size, int i, int j);