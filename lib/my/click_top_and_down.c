/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-guillaume.lallemand
** File description:
** click_top_and_down
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

void click_top_and_down(int n, position_t *pos, char **arr)
{
    if (n == 65)
        move_player_top(pos, arr);
    if (n == 66)
        move_player_down(pos, arr);
}