/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-guillaume.lallemand
** File description:
** game_over
*/
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/sokoban.h"
#include "../../include/struct.h"

int blocked(char **arr, int x, int y)
{
    if (arr[x][y] == 'X') {
        if (arr[x][y - 1] == '#' && arr[x + 1][y] == '#'
        || arr[x][y + 1] == '#' && arr[x + 1][y] == '#'
        || arr[x - 1][y] == '#' && arr[x][y - 1] == '#'
        || arr[x - 1][y] == '#' && arr[x][y + 1] == '#')
            return 1;
    }
    return 0;
}

int count_xx(char **arr, int x, int y, int count)
{
    if (blocked(arr, x, y) == 1)
        count++;
    return count;
}

int game_over(char **arr)
{
    int count = 0;
    int nb_x = cpt_x(arr);

    for (int x = 0; arr[x] != NULL; x++) {
        for (int y = 0; arr[x][y] != '\0'; y++) {
            count = count_xx(arr, x, y, count);
        }
    }
    if (count == nb_x)
        return 1;
    return -1;
}
