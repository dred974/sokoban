/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** move_obs_right
*/
#include "../../include/sokoban.h"
#include "../../include/struct.h"

void move_obs_right(position_t *p, char **arr)
{
    if (arr[p->x][p->y + 1] == 'X')
        arr[p->x][p->y + 2] = 'X';
}