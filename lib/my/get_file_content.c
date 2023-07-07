/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-guillaume.lallemand
** File description:
** get_file_content
*/
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

char *get_file_content(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat line;
    if (stat(filepath, &line) == -1)
        exit(84);
    char *copy = malloc(sizeof(char) * (line.st_size + 1));

    if (fd == -1) {
        write(2, "Error with open\n", 16);
        exit(84);
    }
    if (read(fd, copy, line.st_size) == -1)
        exit(84);
    copy[line.st_size] = '\0';
    close(fd);
    return copy;
}