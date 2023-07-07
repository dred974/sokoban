/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-guillaume.lallemand
** File description:
** error_cases
*/
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include "../../include/sokoban.h"
#include "../../include/struct.h"

void for_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map ");
    my_putstr("file representing the warehouse map");
    my_putstr("containing '#' for walls,\n");
    my_putstr("         'P' for the player,");
    my_putstr("'X' for boxes and 'O' for storage locations.\n");
}

void if_errors_casses(char **arr, int i, int j)
{
    if (arr[i][j] != ' ' && arr[i][j] != '\n' && arr[i][j] != '#'
    && arr[i][j] != 'X' && arr[i][j] != 'O' && arr[i][j] != 'P')
        exit (84);
}

void errors_characters(char **arr)
{
    for (int i = 0; arr[i] != NULL; i++) {
        for (int j = 0; arr[i][j] != '\0'; j++) {
            if_errors_casses(arr, i, j);
        }
    }
}

void for_errors(int ac, char **av)
{
    char *str = "-h";
    if (ac != 2)
        exit(84);
    if (ac == 2 && my_strncmp(av[1], str, my_strlen(str)) == 0) {
        for_usage();
        exit(0);
    }
}