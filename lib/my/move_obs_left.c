/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** move_obs_left
*/
#include "../../include/sokoban.h"
#include "../../include/struct.h"

void move_obs_left(position_t *p, char **arr)
{
    if (arr[p->x][p->y - 1] == 'X')
        arr[p->x][p->y - 2] = 'X';
}