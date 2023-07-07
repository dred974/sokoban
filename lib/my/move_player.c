/*
** EPITECH PROJECT, 2022
** B-PSU-100-RUN-1-1-sokoban-guillaume.lallemand
** File description:
** move_player
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

init_structs_t win_and_lose(init_structs_t str)
{
    str.m = you_win(str.mp);
    str.g = game_over(str.mp);
    str.value = clear_and_print(str.m, str.g, str.mp);
    return str;
}