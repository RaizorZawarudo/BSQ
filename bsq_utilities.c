/*
** EPITECH PROJECT, 2020
** bsq_utilities.c
** File description:
** utility_functions
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

int error_handling(int argc, int map_rows, char *buffer)
{
    int i = 0;
    if (argc != 2) {
        my_putstr("Only one file please");
        return (1);
    }
    if (map_rows <= 0) {
        my_putstr("Invalid first line, must be a positive integer");
        return (1);
    }
    while (buffer[i] >= '0' && buffer[i] <= '9')
        i++;
    while (buffer[i] != '\0') {
        if (buffer[i] != '.' && buffer[i] != 'o' &&
            buffer[i] != '\n' && buffer[i] != '\0') {
            my_putstr("File contains unauthorized characters");
            return (1);
        }
        i++;
    }
    return (0);
}

int get_second_line_size(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int size;
    struct stat stats;
    char *buffer;
    char *second_line;
    int backslashn = 0;
    int a = 0;
    stat(filepath, &stats);
    size = stats.st_size;
    buffer = malloc(sizeof(char) * size + 1);
    second_line = malloc(sizeof(char) * size + 1);
    read(fd, buffer, size);
    for (int i = 0; buffer[i] != '\n'; i++)
        backslashn++;
    for (int i = backslashn + 1; buffer[i] != '\n'; i++) {
        second_line[a] = buffer[i];
        a++;
    }
    close(fd);
    return (my_strlen(second_line));
}

char *load_file_in_mem(char const *filepath)
{
    int filedescriptor = 0;
    int size;
    struct stat stats;
    char *buffer;

    filedescriptor = open(filepath, O_RDONLY);

    if (filedescriptor == -1)
        return ("F");
    stat(filepath, &stats);
    size = stats.st_size;
    buffer = malloc(sizeof(char) * size + 1);
    read(filedescriptor, buffer, size);
    close(filedescriptor);
    return (buffer);
}

int fs_get_number_from_first_line(char const *filepath)
{
    char line[5000];
    char buffer[5000];
    int size = 5000;
    int fd = 0;
    int number_on_first_line = 0;

    if (!filepath)
        return (-1);
    fd = open(filepath, O_RDONLY);
    read(fd, buffer, size);
    buffer[5000] = '\0';
    for (int i = 0; buffer[i] != '\n' && buffer[i] != '\0'; i++)
        line[i] = buffer[i];
    number_on_first_line = my_getnbr(line);
    close(fd);
    if (number_on_first_line <= 0)
        return (-1);
    else
        return (number_on_first_line);
}