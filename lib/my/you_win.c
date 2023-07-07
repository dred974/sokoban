/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-guillaume.lallemand
** File description:
** you_win
*/
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include "../../include/sokoban.h"
#include "../../include/struct.h"

int check_o(char c)
{
    if (c == 'O')
        return 1;
    return 0;
}

int for_win(char *map, int j)
{
    for (; map[j] != '\0'; j++) {
        if (map[j] != 'O')
            return 1;
    }
}

int you_win(char **map)
{
    int j = 0;

    for (int i = 0; map[i] != NULL; i++) {
        // for_win(map[i], j);
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'O')
                return 0;
        }
    }
    return 1;
}