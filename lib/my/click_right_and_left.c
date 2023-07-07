/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-guillaume.lallemand
** File description:
** click_right_and_left
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

void click_right_and_left(int n, position_t *pos, char **arr)
{
    if (n == 67)
        move_player_right(pos, arr);
    if (n == 68)
        move_player_left(pos, arr);
}
